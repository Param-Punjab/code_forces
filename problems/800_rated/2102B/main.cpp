#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0, special_number = 0;
  std::cin >> t;

  std::vector<int> dynamic_array(t);
  std::vector<std::string> result(t, "YES");

  for (int i = 0; i < t; i++) {
    n = 0;
    special_number = 0;
    dynamic_array.clear();

    std::cin >> n;
    dynamic_array.resize(n);

    for (int z = 0; z < n; z++) {
      std::cin >> dynamic_array[z];
    }

    special_number = dynamic_array[0];

    std::sort(dynamic_array.begin(), dynamic_array.end());

    if (special_number < 0) {
      if (dynamic_array[dynamic_array.size() - 1] <= -special_number) {
        result[i] = "NO";
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
