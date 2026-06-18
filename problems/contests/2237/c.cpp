#include <iostream>
#include <vector>

int main() {

  int t = 0, n = 0;
  long long temp = 0;

  bool b = 0;

  std::cin >> t;

  std::vector<long long> arr;
  std::vector<long long> result(t);

  for (int k = 0; k < t; k++) {
    std::cin >> n;

    arr.resize(n);

    for (int i = 0; i < n; i++) {
      std::cin >> arr[i];
    }

    b = 0;
    do {
      for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
          temp = arr[i];
          arr[i] = arr[i + 1];
          arr[i + 1] += temp;
          break;
        } else if (i == n - 2) {
          temp = 0;
          b = 1;
          break;
        }
      }
    } while (b != 1);

    result[k] = arr[arr.size() - 1];
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
