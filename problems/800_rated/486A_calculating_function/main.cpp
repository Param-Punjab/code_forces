#include <iostream>

int main() {
  int n, t = 0, c = 0;

  std::cin >> n;

  for (int i = 1; i <= n; i++) {

    if (i % 2 == 0) {
      c = i;
    } else {
      c = -i;
    }
    t = t+c;
  }

  std::cout << t;

  return 0;
}
