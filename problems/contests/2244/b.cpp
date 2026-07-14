#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0, sum = 0;

  std::cin >> t;

  std::vector<std::string> result(t, "NO");
  std::vector<int> my_v;

  for (int i = 0; i < t; i++) {
    my_v.clear();
    n = 0, sum = 0;
    std::cin >> n;

    my_v.resize(n);

    for (int j = 0; j < n; j++) {
      std::cin >> my_v[j];
      sum += my_v[j];
    }

    if (sum < (n * (n + 1) / 2)) {
      continue;
    }

    for (int j = 0; j < n - 1; j++) {
    }

    result[i] = "YES";
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }
}
