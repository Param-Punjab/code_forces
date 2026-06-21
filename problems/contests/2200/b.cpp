#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0, order = 0;

  std::cin >> t;

  std::vector<int> arr;
  std::vector<int> result(t);

  for (int i = 0; i < t; i++) {
    std::cin >> n;
    order = 0;

    arr.resize(n);
    result[i] = n;

    if (n == 1) {
      std::cin >> arr[0];
      continue;
    }

    for (int j = 0; j < n; j++) {
      std::cin >> arr[j];
    }

    for (int k = 0; k < n; k++) {
      if (order <= arr[k]) {
        order = arr[k];
      } else {
        result[i] = 1;
        break;
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
