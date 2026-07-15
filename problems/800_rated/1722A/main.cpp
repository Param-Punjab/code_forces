#include <algorithm>
#include <iostream>

int main() {
  int t = 0;

  std::cin >> t;

  while (t--) {
    int n = 0;
    std::string s;
    std::cin >> n >> s;

    if (n != 5) {
      std::cout << "NO" << std::endl;
      continue;
    }

    std::string correct = "Timur";
    std::sort(s.begin(), s.end());
    std::sort(correct.begin(), correct.end());

    if (s == correct) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}
