#include <iostream>

int main() {
  int arr[1000] = {0};

  int value = 1, t = 0;

  for (int i = 0; i < 1000; i++) {

    while (true) {
      if (value % 10 == 3 || value % 3 == 0) {
        value++;
      } else {
        break;
      }
    }

    arr[i] = value;
    value++;
  }

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    value = 0;
    std::cin >> value;

    std::cout << arr[value - 1] << std::endl;
  }

  return 0;
}
