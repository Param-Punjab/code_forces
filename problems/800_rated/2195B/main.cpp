#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0;

  std::cin >> t;

  std::vector<int> my_v;
  std::vector<std::string> result(t, "YES");

  for (int i = 0; i < t; i++) {
    n = 0, my_v.clear();

    std::cin >> n;

    my_v.resize(n);

    for (int j = 0; j < n; j++) {
      std::cin >> my_v[j];
    }

    for (int j = 0; j <= n / 2; j++) {
      if (my_v[j] != j + 1) {

        if (my_v[(2 * (1 + j) - 1)] != j + 1) {
          result[i] = "NO";
          break;

        } else {
          std::swap(my_v[j], my_v[(2 * (1 + j) - 1)]);
        }
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
