#include <iostream>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);  // Fast I/O
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    std::vector<std::string> results;

    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;

        std::vector<int> x(n);
        for (int j = 0; j < n; j++) {
            std::cin >> x[j];
        }

        if (n == 2 && x[1] - x[0] > 1) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    for (const std::string& res : results) {
        std::cout << res << '\n';
    }

    return 0;
}