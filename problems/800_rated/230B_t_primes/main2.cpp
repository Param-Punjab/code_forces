#include <cmath>
#include <iostream>
#include <vector>
int main() {
  long long int n = 0;

  int t = 0;

  long double test = 0.00;

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

  std::vector<long long int> primes;
  for (long long int p = 2; p <= MAX_LIMIT; p++) {
    if (is_prime[p]) {
      primes.push_back(p);
    }
  }

  std::cin >> t;
  std::vector<std::string> arr(t, "NO");

  for (int i = 0; i < t; i++) {
    std::cin >> n;
    if (n == 1) {
      continue;
    }
    test = std::sqrt(n);

    if ((int)test == test)
      n = test;

    for (int j = 0; j < primes.size(); j++) {
      if (n == primes[j]) {
        arr[i] = "YES";
        break;
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << arr[i] << std::endl;
  }

  return 0;
}
