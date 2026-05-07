#include <iostream>

int main() {
  int n, arr[4] = {0}, temp = 0;

  std::cin >> n;


  while(true) {
    n = n+1;
    temp = n;

    for (int i = 3; i >= 0; i--) {
      arr[i] = temp % 10;
      temp /= 10;
    }

    if (
      (arr[0] != arr[1] && arr[0] != arr[2] && arr[0] != arr[3]) &&
      (arr[1] != arr[2] && arr[1] != arr[3]) &&
      (arr[2] != arr[3])
    ) {std::cout << n; break;}

  }

  return 0;
}
