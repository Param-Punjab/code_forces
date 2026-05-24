#include <iostream>
#include <vector>

int main() {
  int n = 0, even = 0, odd = 0;

  std::cin >> n;

  std::vector<int> num(n, 0);

  for (int i = 0; i < n; i++) {
    std::cin >> num[i];
    if (num[i] % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  if (even < odd) {
    for (int i = 0; i < n; i++) {
      if (num[i] % 2 == 0) {
        std::cout << i + 1 << std::endl;
      }
    }
  } else {
    for (int i = 0; i < n; i++) {
      if (num[i] % 2 != 0) {
        std::cout << i + 1 << std::endl;
      }
    }
  }

  return 0;
}
