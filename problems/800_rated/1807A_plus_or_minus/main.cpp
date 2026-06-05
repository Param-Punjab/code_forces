#include <iostream>
#include <vector>

int main() {
  int t = 0;

  std::cin >> t;

  std::vector<char> result(t, '-');

  int a1[3] = {0};

  for (int i = 0; i < t; i++) {
    std::cin >> a1[0] >> a1[1] >> a1[2];

    if ((a1[0] + a1[1]) == a1[2]) {
      result[i] = '+';
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
