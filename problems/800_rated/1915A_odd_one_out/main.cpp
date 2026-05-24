#include <iostream>
#include <vector>

int main() {
  int t = 0;
  std::cin >> t;

  int arr[3] = {0};
  std::vector<int> final(t, 0);

  for (int i = 0; i < t; i++) {
    std::cin >> arr[0] >> arr[1] >> arr[2];
    if (arr[0] == arr[1]) {
      final[i] = arr[2];
    } else if (arr[0] == arr[2]) {
      final[i] = arr[1];
    } else {
      final[i] = arr[0];
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << final[i] << std::endl;
  }
  return 0;
}
