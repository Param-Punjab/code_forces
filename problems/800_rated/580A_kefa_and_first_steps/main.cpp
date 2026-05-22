#include <iostream>
#include <vector>

int main() {
  int n = 0, pointer = 0, max_pointer = 0;

  std::cin >> n;

  std::vector<int> arr(n, 0);

  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];

    if (i != 0 && arr[i] >= arr[i - 1]) {
      pointer++;

      if (pointer > max_pointer) {
        max_pointer = pointer;
      }
    } else {
      pointer = 0;
    }
  }

  std::cout << max_pointer + 1 << std::endl;
  return 0;
}
