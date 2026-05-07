#include <iostream>
#include <vector>

int main() {
    int t = 0, n = 0;
    std::cin >> t;

    std::vector<std::vector<int>> arr(t);

    for (int i = 0; i < t; i++) {
        std::cin >> n;
        arr[i].resize(n);
        for (int j = 0; j < n; j++) {
            std::cin >> arr[i][j];
        }

    }
}