#include <iostream>

int main() {
  int a = 0, b = 0, something = 0;

  float total = 0.00;

  std::cin >> a >> b;

  total += (float)a;
  total += (float)a / (float)b;
  total += ((float)a / (float)b) / (float)b;

  something = total;
  if (total == something) {
    std::cout << total << std::endl;
  } else {
    if ((float)something + 0.5 > total) {
      std::cout << total << std::endl;
    } else {
      std::cout << something + 1 << std::endl;
    }
  }

  return 0;
}
