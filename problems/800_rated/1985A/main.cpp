#include <iostream>

int main() {
  int t = 0;

  std::cin >> t;

  while (t--) {
    std::string arr[2];

    std::cin >> arr[0] >> arr[1];

    std::swap(arr[0][0], arr[1][0]);

    std::cout << arr[0] << " " << arr[1] << std::endl;
  }

  return 0;
}
