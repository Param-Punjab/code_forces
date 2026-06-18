#include <iostream>

int main() {
  int a = 0, b = 0, t = 0;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    std::cin >> a >> b;
    if (a % 2 != 0 && b % 2 != 0) {
      std::cout << "NO" << std::endl;
    } else {
      std::cout << "YES" << std::endl;
    }
  }

  return 0;
}