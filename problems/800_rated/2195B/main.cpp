#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0;

  std::cin >> t;

  std::vector<int> my_v, temp;
  std::vector<std::string> result(t, "YES");

  for (int j = 0; j < t; j++) {
    n = 0;
    my_v.clear();
    temp.clear();

    std::cin >> n;

    my_v.resize(n);
    temp.resize(n);

    for (int i = 0; i < n; i++) {
      std::cin >> my_v[i];
      temp[i] = my_v[i];
    }

    std::sort(temp.begin(), temp.end());

    for (int i = 0; i < n; i++) {

      if ((i + 1) % 2 != 0 && i != 0) {

        if (my_v[i] != temp[i]) {

          if ((i + 1) * 2 >= n) {
            result[j] = "NO";
          } else {
            if (my_v[(i + 1) * 2 - 1] != i + 1) {
              result[i] = "NO";
            }
          }
        }
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
