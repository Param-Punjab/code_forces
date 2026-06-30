#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  int t = 0, n = 0, zero = 0, one = 0;

  std::cin >> t;

  std::vector<std::string> v(t);

  for (int i = 0; i < t; i++) {
    std::cin >> n;

    std::cin >> v[i];
    sort(v[i].begin(), v[i].end());

    // for (int j = 0; j <= n; j++) {
    //   if (v[i][j] == v[i][j + 1]) {
    //     v[i].erase(j, 1);
    //     n--;
    //   }
    // }

    int j = 0;
    while (v[i].size() != 1 && j < v[i].size() - 1) {
      if (v[i][j] == v[i][j + 1]) {
        v[i].erase(j, 1);
      } else {
        j++;
      }

      if (v[i].size() == 2 && v[i][0] != v[i][1]) {
        break;
      }
    }
    std::cout << v[i] << std::endl;
  }
  return 0;
}
