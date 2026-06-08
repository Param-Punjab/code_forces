#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0;

  bool y = 0;

  std::cin >> t;

  std::vector<std::string> results(t, "-1");

  std::vector<int> arr;

  for (int i = 0; i < t; ++i) {
    std::cin >> n;

    arr.resize(n);

    for (int k = 0; k < n; k++) {
      std::cin >> arr[k];
    }

    std::sort(arr.begin(), arr.end(), std::greater<int>());

    if (n < 3) {
      results[i] = std::to_string(arr[0]) + " " + std::to_string(arr[1]);
      continue;
    }

    y = 0;
    for (int k = 0; k < n - 2; k++) {
      if (arr[k] % arr[k + 1] == arr[k + 2]) {
        y = 1;
        continue;
      } else {
        y = 0;
        break;
      }
    }

    if (y == 1) {
      results[i] = std::to_string(arr[0]) + " " + std::to_string(arr[1]);
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << results[i] << std::endl;
  }

  return 0;
}
