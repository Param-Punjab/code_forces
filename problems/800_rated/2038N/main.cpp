#include <iostream>

int main() {
  int t = 0, a = 0, b = 0;
  char expression;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    std::cin >> a >> expression >> b;

    if (a == b) {
      std::cout << a << "=" << b << std::endl;
    } else if (a > b) {
      std::cout << a << ">" << b << std::endl;
    } else if (a < b) {
      std::cout << a << "<" << b << std::endl;
    }
  }

  return 0;
}
