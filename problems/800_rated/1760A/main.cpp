#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int t = 0;

  int arr[3] = {0};

  std::cin >> t;

  std::vector<int> result(t);

  for (int i = 0; i < t; i++) {
    std::cin >> arr[0] >> arr[1] >> arr[2];

    std::sort(arr, arr + 3);

    result[i] = arr[1];
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
