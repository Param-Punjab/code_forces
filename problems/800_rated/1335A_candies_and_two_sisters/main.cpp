#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0;
  std::cin >> t;

  std::vector<int> arr(t);

  for (int i = 0; i < t; i++) {
    std::cin >> n;

    arr[i] = (n - (n / 2)) - 1;
  }

  for (int i = 0; i < t; i++) {
    std::cout << arr[i] << std::endl;
  }

  return 0;
}
