#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string s = "codeforces";

  int t = 0;

  std::cin >> t;

  std::vector<std::string> arr(t);
  std::vector<int> result(t, 0);

  for (int i = 0; i < t; i++) {
    std::cin >> arr[i];

    for (int k = 0; k < 10; k++) {
      if (s[k] != arr[i][k]) {
        result[i]++;
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
