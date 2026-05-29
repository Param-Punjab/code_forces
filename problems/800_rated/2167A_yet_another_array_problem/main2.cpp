#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

std::vector<long long int> get_divisors(long long int n, long long int l) {
  std::vector<long long int> divisors;

  for (long long int i = 2; i <= l; i++) {
    if (n % i == 0) {
      divisors.push_back(i);
    }
  }

  return divisors;
}

long long int gcd(long long int a, long long int b) {
  std::vector<long long int> divisors_a;
  std::vector<long long int> divisors_b;
  if (a < b) {
    divisors_a = get_divisors(a, a);
    divisors_b = get_divisors(b, a);
  } else {
    divisors_a = get_divisors(a, b);
    divisors_b = get_divisors(b, b);
  }

  long long int gcd = 1;

  for (auto it = divisors_a.rbegin(); it != divisors_a.rend(); it++) {
    if (std::find(divisors_b.begin(), divisors_b.end(), *it) != divisors_b.end()) {
      if (*it > gcd) {
        gcd = *it;
        break;
      }
    }
  }

  return gcd;
}

int main() {
  long long int test = 0, n = 0, max_n = 0, gcd_val = 0;

  std::cin >> test;

  std::vector<std::set<long long int>> my_vector(test, std::set<long long int>());
  std::vector<int> result(test, -1);

  for (int i = 0; i < test; i++) {
    max_n = 0;
    std::cin >> n;
    for (int j = 0; j < n; j++) {
      long long int element;
      std::cin >> element;
      my_vector[i].insert(element);
      if (element == 1) {
        result[i] = 2;
      }
      if (element > max_n) {
        max_n = element;
      }
    }

    for (int j = 2; j <= max_n; j++) {
      if (result[i] != -1) {
        break;
      }
      for (long long int element : my_vector[i]) {
        gcd_val = gcd(element, j);
        if (gcd_val == 1) {
          result[i] = j;
          break;
        }
      }
    }
  }

  for (int i = 0; i < test; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}