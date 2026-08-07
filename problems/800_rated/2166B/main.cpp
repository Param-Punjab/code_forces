#include <iostream>
#include <vector>

int main() {
  int t = 0;
  long long b = 0, a = 0, n = 0;

  std::cin >> t;

  std::vector<int> result(t);

  for (int i = 0; i < t; i++) {
    b = 0, a = 0, n = 0;
    std::cin >> a >> b >> n;

    if (n * b <= a || b == a) {
      result[i] = 1;
    } else {
      result[i] = 2;
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
