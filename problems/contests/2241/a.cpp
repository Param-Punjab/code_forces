#include <iostream>

int main() {
  int t = 0;

  std::cin >> t;

  int x = 0, y = 0;
  float temp = 0.00;

  for (int i = 0; i < t; i++) {
    x = 0, y = 0, temp = 0;

    std::cin >> x >> y;

    temp = (float)x / (float)y;

    if (x == y || (x / y == temp && y > 1)) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}
