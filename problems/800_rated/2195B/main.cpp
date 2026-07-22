#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0;

  std::cin >> t;

  std::vector<int> my_v, temp;
  std::vector<std::string> result(t, "YES");

  for (int j = 0; j < t; j++) {
    my_v.clear(), temp.clear(), n = 0;

    std::cin >> n;

    my_v.resize(n), temp.resize(n);

    for (int i = 0; i < n; i++) {
      std::cin >> my_v[i];
      temp[i] = my_v[i];
    }

    std::sort(temp.begin(), temp.end());

    for (int i = n / 2; i < n; i++) {
      if (my_v[i] != temp[i]) {
        if ((i + 1) % 2 == 0) {
          if (my_v[i / 2] == i + 1) {
            continue;
          }
        }
      } else {
        continue;
      }
      result[j] = "NO";
      break;
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
