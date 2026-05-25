    #include <cmath>
    #include <iostream>
    #include <vector>
    int main() {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        long long int MAX_LIMIT = 1000000;

        std::vector<bool> is_prime(MAX_LIMIT + 1, true);
        is_prime[0] = is_prime[1] = false;

        for (long long int p = 2; p * p <= MAX_LIMIT; p++) {
            if (is_prime[p]) {
                for (long long int i = p * p; i <= MAX_LIMIT; i += p) {
                    is_prime[i] = false;
                }
            }
        }

        int t;
        std::cin >> t;
        std::vector<std::string> arr(t, "NO");
        long long int n;
        for (int i = 0; i < t; i++) {
            std::cin >> n;
            if (n == 1) {
                continue;
            }
            long long int root = std::round(std::sqrt(n));
            if (root * root == n) {
                if (is_prime[root]) {
                    arr[i] = "YES";
                }
            }
        }

        for (int i = 0; i < t; i++) {
            std::cout << arr[i] << "\n";
        }

        return 0;
    }