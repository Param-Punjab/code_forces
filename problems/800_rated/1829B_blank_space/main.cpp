#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  std::vector<int> helper;
  std::vector<int> result;

  int test = 0, n = 0, count = 0;

  std::cin >> test;
  result.resize(test);

  for (int i = 0; i < test; i++) {
    std::cin >> n;

    helper.clear();
    helper.resize(n);

    count = 0;
    for (int j = 0; j < n; j++) {
      std::cin >> helper[j];
      if (helper[j] == 0) {
        count++;
        result[i] = std::max(result[i], count);
      } else {
        count = 0;
      }
    }
  }

  for (int i = 0; i < test; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}