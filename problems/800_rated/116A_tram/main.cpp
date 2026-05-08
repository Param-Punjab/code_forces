#include <iostream>

int main() {
  int n = 0, b = 0, t[2] = {0};

  std::cin >> n;

  int Max = 0;

  for (int i = 0; i < n; i++) {
    std::cin >> t[0] >> t[1];
    b -= t[0];
    b += t[1];
    if (Max < b) {Max = b;}
  }

  std::cout << Max << std::endl;
  return  0;
}
