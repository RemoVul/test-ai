#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  The vulnerability arises from the fact that memset is called on the password and localToken arrays
//  after they have been freed or are about to go out of scope.
//  Once memory is freed or goes out of scope, it should not be accessed or modified anymore.
//  This is because the memory may be reused for other purposes,
//  and attempting to modify it can lead to unexpected behavior,
//  including security vulnerabilities.
void f(char *password, size_t bufferSize) {
  char localToken[256];
  init(localToken, password);
  memset(password, ' ', strlen(password)); // Noncompliant, password is about to be freed
  memset(localToken, ' ', strlen(localToken)); // Noncompliant, localToken is about to go out of scope
  free(password);
}


//  By using memset_s in the modified code, the compiler or runtime environment can provide
//  additional protections to detect potential buffer overflows.
//  If the specified buffer size is smaller than the length parameter
//  (bufferSize or sizeof(localToken)), it will prevent the overwrite
//  operation from exceeding the bounds of the buffer.

void f(char *password, size_t bufferSize) {
  char localToken[256];
  init(localToken, password);
  memset_s(password, bufferSize, ' ', strlen(password));
  memset_s(localToken, sizeof(localToken), ' ', strlen(localToken));
  free(password);
}