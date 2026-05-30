#include <iostream>

int main() {
  int test = 0;

  std::cin >> test;

  for (int i = 0; i < test; i++) {
    char input;

    std::cin >> input;

    if (input == 'c' || input == 'o' || input == 'd' || input == 'e' || input == 'f' || input == 'r' || input == 's') {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}