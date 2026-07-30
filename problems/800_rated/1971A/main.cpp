#include <iostream>

int main() {
  int t = 0;

  int a = 0, b = 0;

  std::cin >> t;

  while (t--) {
    std::cin >> a >> b;

    if (a > b) {
      std::cout << b << " " << a << std::endl;
    } else {
      std::cout << a << " " << b << std::endl;
    }
  }

  return 0;
}
