#include <iostream>
#include <string>
#include <vector>

int main() {
  int test = 0, c = 0;

  std::cin >> test;

  std::vector<int> pre(test);
  std::vector<std::string> result(test);

  for (int i = 0; i < test; i++) {
    std::cin >> c;

    if (c >= 1900) {
      result[i] = "Division 1";
    } else if (c >= 1600 && c <= 1899) {
      result[i] = "Division 2";
    } else if (c >= 1400 && c <= 1599) {
      result[i] = "Division 3";
    } else {
      result[i] = "Division 4";
    }
  }

  for (int i = 0; i < test; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
