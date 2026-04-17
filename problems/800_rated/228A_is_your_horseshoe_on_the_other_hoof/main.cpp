#include <iostream>

int main() {
  int a = 0, k = 0, c = 0;

  bool b = 1;
  int arr[4] = {0};

  for (int i = 0; i < 4; i++) {
    std::cin >> a;

    for (int j = 0; j < 4; j++) {
      if (arr[j] == a) {
        b = 0; break;
      }
    }
    if (b == 1) { arr[i] = a; k++;} b = 1;
  }

  std::cout << 4-k << std::endl;

  return 0;
}