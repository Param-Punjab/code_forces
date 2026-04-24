#include <iostream>

int main() {
  int w = 0, k = 0;
  long long int n = 0, amount = 0, f = 0;

  std::cin >> k >> n >> w;

  for (int i = 1; i <= w; i++) {
    amount += i*k;
  }

  f = amount - n;

  if (f > 0) {std::cout << f;}
  else {std::cout << 0;}

  return 0;
}
