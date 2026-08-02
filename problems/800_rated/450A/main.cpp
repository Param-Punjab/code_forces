#include <iostream>
#include <vector>

int main() {
  int n = 0, m = 0, value = 0;

  std::cin >> n >> m;
  value = n;

  std::vector<int> my_v(n);
  std::vector<bool> result(n, 1);

  for (int i = 0; i < n; i++) {
    std::cin >> my_v[i];
  }

  while (value != 1) {
    for (int i = 0; i < n; i++) {
      if (my_v[i] <= m && my_v[i] != 0) {
        if (value == 1) {
          break;
        } else {
          value--;
        }
        result[i] = 0;
        my_v[i] = 0;
      } else if (my_v[i] > m) {
        my_v[i] -= m;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    if (result[i] == 1) {
      std::cout << i + 1 << std::endl;
    }
  }
}
