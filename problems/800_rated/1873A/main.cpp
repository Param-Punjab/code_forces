#include <iostream>

int main() {
  int t = 0;

  std::string s;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    std::cin >> s;

    if (s == "bac" || s == "acb" || s == "cba" || s == "abc") {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}
