#include <iostream>

int main() {
  int arr[4] = {0};
  int d = 0, count = 0;

  for (int i = 0; i < 4; i++) {
    std::cin >> arr[i];
  }

  std::cin >> d;

  if (arr[0] == 1) {
    std::cout << d;
    return 0;
  }
  else {
    for (int i = 1; i <= d; i++) {
      if (
        i % arr[0] != 0 && 
        i % arr[1] != 0 && 
        i % arr[2] != 0 && 
        i % arr[3] != 0 
      ) {
        count++;
      }
    }
    std::cout << d-count;
    return 0;
  }
}