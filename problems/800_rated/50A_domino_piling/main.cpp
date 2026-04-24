#include <iostream>
#include <cmath>

int check_value(int m, int n) {
  int x = 0, y = 0;

  if (m % 2 == 0 && n % 2 == 0) {
    x = m/2;
    y = n;
    return x*y;

  }

  else if (m % 2 != 0 && n % 2 != 0) {
    int z = 0;
    x = std::floor(m/2);
    y = n;
    z = std::floor(n/2);
    return (x*y)+z;
  }

  else {
    if (m % 2 == 0) {
      x = m/2;
      y = n;
      return x*y;
    } else {
      x = m;
      y = n/2;
      return x*y;
    }
  }
}

int main() {
  int m = 0, n = 0;

  std::cin >> m >> n;

  std::cout << check_value(m, n);
  return 0;
}
