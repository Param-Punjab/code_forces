#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0, count = 0, max_count = 0;
  std::string s;

  std::cin >> t;

  std::vector<int> result(t);

  for (int j = 0; j < t; j++) {
    n = 0, count = 0, max_count = 0;
    std::cin >> n;

    s.erase();

    std::cin >> s;

    for (int i = 0; i < n; i++) {
      if (s[i] == '#') {
        count++;
      } else {
        max_count = std::max(max_count, count);
        count = 0;
      }
    }

    max_count = std::max(max_count, count);

    result[j] = (max_count + 1) / 2;
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
