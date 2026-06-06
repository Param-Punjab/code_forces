#include <iostream>
#include <vector>

int main() {
  int t = 0;
  std::cin >> t;

  std::vector<std::string> result(t, "NONE");

  int arr[3] = {0};

  for (int i = 0; i < t; i++) {
    std::cin >> arr[0] >> arr[1] >> arr[2];

    if (arr[0] < arr[1] && arr[1] < arr[2]) {
      result[i] = "STAIR";
    } else if (arr[1] > arr[0] && arr[1] > arr[2]) {
      result[i] = "PEAK";
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }
}
