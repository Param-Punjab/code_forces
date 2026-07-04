#include <algorithm>
#include <cmath>
#include <iostream>

long long layer(int x, int y, int n) {
  long long x1 = std::min(x, y);
  long long y1 = std::min(n + 1 - x, n + 1 - y);

  return std::min(x1, y1);
}

int main() {
  long long t = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0, n = 0;

  std::cin >> t;

  while (t--) {
    x1 = 0, y1 = 0, x2 = 0, y2 = 0, n = 0;
    std::cin >> n;
    std::cin >> x1 >> y1 >> x2 >> y2;

    std::cout << std::abs(layer(x1, y1, n) - layer(x2, y2, n)) << std::endl;
  }

  return 0;
}
