#include <iostream>
#include <vector>

int main() {
  int t = 0, smallest = 1001, count = 0, n = 0;

  std::cin >> t;

  std::vector<int> arr;
  std::vector<int> result(t);

  for (int k = 0; k < t; k++) {
    std::cin >> n;

    arr.resize(n);

    for (int i = 0; i < n; i++) {
      std::cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
      if (arr[i] == smallest) {
        if (arr[i + 1] > smallest) {
          arr[i + 1] = smallest;
        }
      } else if (arr[i] < smallest) {
        smallest = arr[i];

        if (arr[i + 1] > smallest) {
          arr[i + 1] = smallest;
        }
      }
    }

    for (int i = 0; i < n; i++) {
      count += arr[i];
    }

    result[k] = count;

    count = 0;
    smallest = 1001;
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }
  return 0;
}
