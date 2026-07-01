#include <iostream>

int main() {
  int t = 0, x = 0, y = 0;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    x = 0, y = 0;

    std::cin >> x >> y;

    if (x % y == 0) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}
