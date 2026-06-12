#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int t = 0;
    std::cin >> t;

    std::vector<int> arr;
    std::vector<int> result(t);

    for (int i = 0; i < t; i++) {
        int n = 0, k = 0;
        std::cin >> n;

        arr.resize(n);
        for (int j = 0; j < n; j++) {
            std::cin >> arr[j];
        }

        std::sort(arr.begin(), arr.end());

        k = arr.back() + 1;   // max + 1
        k = k - arr.front();  // (max + 1) - min

        result[i] = k;
    }

    for (int i = 0; i < t; i++) {
        std::cout << result[i] << std::endl;
    }

    return 0;
}
