#include <iostream>
#include <string>

int main() {
  int t = 0;

  std::cin >> t;

  std::string s1;

  for (int i = 0; i < t; i++) {
    std::cin >> s1;

    std::cout << (s1[0] - '0') + (s1[1] - '0') << std::endl;
  }

  return 0;
}
