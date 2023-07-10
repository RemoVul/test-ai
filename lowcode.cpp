// simple cpp code
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) std::cin >> v[i];
    std::sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] > ans + 1) break;
        ans += v[i];
    }
    std::cout << ans + 1 << std::endl;
    return 0;
}

// /home/raghad/Desktop/GP/removul/removul.py" --directory_name "/home/raghad/Desktop/Test" Traceback (most recent call last): File "/home/raghad/Desktop/GP/removul/removul.py", line 148, in <module> main() File "/home/raghad/Desktop/GP/removul/removul.py", line 138, in main args=args File "/home/raghad/Desktop/GP/removul/removul/lib/python3.6/site-packages/pytorch_lightning/core/saving.py", line 134, in load_from_checkpoint checkpoint = pl_load(checkpoint_path, map_location=lambda storage, loc: storage) File "/home/raghad/Desktop/GP/removul/removul/lib/python3.6/site-packages/pytorch_lightning/utilities/cloud_io.py", line 37, in load with fs.open(path_or_url, "rb") as f: File "/home/raghad/Desktop/GP/removul/removul/lib/python3.6/site-packages/fsspec/spec.py", line 1015, in open **kwargs, File "/home/raghad/Desktop/GP/removul/removul/lib...
// ('/home/raghad/Desktop/Test/lowcode.cpp', []) ('/home/raghad/Desktop/Test/code.c', [[14, 11, 13, 12, 15], [39, 42, 37, 43, 40, 47, 38, 48], [69, 65, 67, 68, 66, 71], [89, 95, 96, 97]])