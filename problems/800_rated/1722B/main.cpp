#include <iostream>

int main() {
  int t = 0, n = 0;
  std::string s1, s2;

  std::cin >> t;

  for (int i = 0; i < t; i++) {
    s1.clear(), s2.clear();
    n = 0;

    std::cin >> n >> s1 >> s2;

    for (int j = 0; j < n; j++) {
      if (s1[j] == 'G') {
        s1[j] = 'B';
      }
      if (s2[j] == 'G') {
        s2[j] = 'B';
      }
    }

    if (s1 == s2) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}
