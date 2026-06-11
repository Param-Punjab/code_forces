#include <iostream>

int main() {
  int t = 0, n = 0;

  std::cin >> t;
  std::string thing;

  for (int i = 0; i < t; i++) {
    n =  0;
    std::cin >> thing;

    for (int i = 0; i < 5; i++) {
      if (thing[i] == 'A') {
        n--;
      } else {
        n++;
      }
    }
    if (n > 0) {
      std::cout << "B" << std::endl;
    } else {
      std::cout << "A" << std::endl;
    }
  }

  return 0;
}