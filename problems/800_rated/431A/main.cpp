#include <iostream>
#include <string>

int main() {
  int a[4];
  for (int i = 0; i < 4; i++) {
    std::cin >> a[i];
  }

  std::string s;
  std::cin >> s;

  int total = 0;
  for (char c : s) {
    total += a[c - '1']; // '1' becomes index 0, '2' becomes index 1, etc.
  }

  std::cout << total << std::endl;
  return 0;
}
