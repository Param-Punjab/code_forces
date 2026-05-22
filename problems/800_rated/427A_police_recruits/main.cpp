#include <iostream>
#include <vector>

int main() {
  int n = 0, p = 0, t = 0;

  std::cin >> n;

  int event[n];

  for (int i = 0; i < n; i++) {
    std::cin >> event[i];
  }

  for (int i = 0; i < n; i++) {
    if (event[i] == -1 && p == 0) {
      t -= 1;
    } else if (event[i] == -1 && p != 0) {
      if (t == 0) {
        p -= 1;
      }
    } else if (event[i] == 1 && t == 0) {
      p += 1;
    } else if (event[i] == 1 && t != 0) {
      t += 1;
    }
  }

  std::cout << std::abs(t) << std::endl;
}
