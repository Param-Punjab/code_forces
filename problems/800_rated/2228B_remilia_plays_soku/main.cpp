#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0, x1 = 0, x2 = 0, k = 0, count = 0, outer = 0, inner = 0;
  std::cin >> t;

  std::vector<int> result(t, 0);

  for (int i = 0; i < t; i++) {
    outer = 0;
    inner = 0;
    std::cin >> n >> x1 >> x2 >> k;

    result[i] += k;

    if (x1 < (n - x1)) {
      outer += x1;
    } else {
      outer += (n - x1);
    }

    if (x2 < (n - x2)) {
      outer += x2;
    } else {
      outer += (n - x2);
    }

    inner = std::abs(x1 - x2);

    if (inner < outer) {
      result[i] += inner;
    } else {
      result[i] += outer;
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
