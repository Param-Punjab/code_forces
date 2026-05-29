#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> get_divisors(int n, int l) {
  std::vector<int> divisors;

  for (int i = 2; i <= l; i++) {
    if (n % i == 0) {
      divisors.push_back(i);
    }
  }

  return divisors;
}

int gcd(int a, int b) {
  std::vector<int> divisors_a;
  std::vector<int> divisors_b;
  if (a < b) {
    divisors_a = get_divisors(a, a);
    divisors_b = get_divisors(b, a);
  } else {
    divisors_a = get_divisors(a, b);
    divisors_b = get_divisors(b, b);
  }

  int gcd = 1;

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
  int test = 0, n = 0, max_n = 0, gcd_val = 0;

  std::cin >> test;

  std::vector<std::vector<long long int>> my_vector(test, std::vector<long long int>(n, 0));
  std::vector<int> result(test, -1);

  for (int i = 0; i < test; i++) {
    max_n = 0;
    std::cin >> n;
    my_vector[i].resize(n);
    for (int j = 0; j < n; j++) {
      std::cin >> my_vector[i][j];
      if (my_vector[i][j] == 1) {
        result[i] = 2;
      }
      if (my_vector[i][j] > max_n) {
        max_n = my_vector[i][j];
      }
    }

    for (int j = 2; j <= max_n; j++) {
      if (result[i] != -1) {
        break;
      }
      for (int k = 0; k < n; k++) {
        gcd_val = gcd(my_vector[i][k], j);
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