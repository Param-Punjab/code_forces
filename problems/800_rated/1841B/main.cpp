#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::cin >> t;
  std::vector<std::string> result(t);

  for (int j = 0; j < t; ++j) {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    int drop = 0;
    result[j].clear();

    for (int i = 0; i < n; ++i) {
      std::cin >> a[i];

      if (i == 0) {
        result[j].push_back('1');
      } else {
        if (drop == 0) {
          if (a[i] >= a[i - 1]) {
            result[j].push_back('1');
          } else {
            if (a[i] <= a[0]) {
              drop = 1;
              result[j].push_back('1');
            } else {
              result[j].push_back('0');
              a[i] = a[i - 1];
            }
          }
        } else {
          if (a[i] >= a[i - 1] && a[i] <= a[0]) {
            result[j].push_back('1');
          } else {
            result[j].push_back('0');
            a[i] = a[i - 1];
          }
        }
      }
    }
  }

  for (int i = 0; i < t; ++i) {
    std::cout << result[i] << '\n';
  }
  return 0;
}
