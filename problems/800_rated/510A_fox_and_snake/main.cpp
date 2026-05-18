#include <iostream>

int main() {
  int m = 0, n = 0, counter = 0;

  std::cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i % 2 == 0) {std::cout << "#";}
      else {
        if ((counter % 2 == 0) && j == m - 1) {
          std::cout << "#";
        } else if ((counter % 2 != 0) && j == 0) {
          std::cout << "#";
        } else {
          std::cout << ".";
        }
      }
    }
    if (i % 2 != 0) counter++;
    std::cout << std::endl;
  }
  return 0;
}