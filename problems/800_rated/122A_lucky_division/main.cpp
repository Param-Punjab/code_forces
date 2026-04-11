#include <iostream>

int main() {
  int n;

  std::cin >> n;

  int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

  for (int l: lucky) {
    if (n % l == 0) {
      std::cout << "YES";
      return 0;
    }
  }
  std::cout << "NO";
  return 0;
}
