#include <iostream>

int main() {
  long long int n = 0;
  int k = 0;

  std::cin >> n >> k;

  while (k > 0) {
    if (n % 10 == 0) {
      n /= 10;
    } else {
      n -= 1;
    }
    k--;
  }

  std::cout << n;
  return 0;
}
