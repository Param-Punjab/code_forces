#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0, x = 0, count = 0;

  bool possible = 0;
  std::cin >> t;
  std::vector<std::string> result(t, "NO");

  while (t--) {
    possible = 0;
    n = 0, x = 0, count = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
      std::cin >> x;

      if (x >= 3) {
        possible = 1;
      } else if (x >= 2) {
        count++;
    }
    }

    if (possible == 1 || count >= 2)
      std::cout << "YES" << std::endl;
    else
      std::cout << "NO" << std::endl;
  }

  return 0;
}
