#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
  std::unordered_map<int, int> my_map;

  int n = 0, found = 0, t = 0;

  std::cin >> n;

  std::vector<int> my_v(n);

  while (t--) {
    my_v.clear();
    for (int i = 0; i < n; i++) {
      std::cin >> my_v[i];
      my_map[my_v[i]]++;
    }

    for (const auto &value : my_map) {
      if (value.second == 3) {
        found = value.first;
      }
    }

    if (found != 0) {
      std::cout << found << std::endl;
    } else {
      std::cout << -1 << std::endl;
    }
  }

  return 0;
}
