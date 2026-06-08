#include <iostream>
#include <vector>

int main() {
  int t = 0;

  std::string s1;

  std::cin >> t;

  std::vector<std::string> result(t, "NO");

  for (int i = 0; i < t; i++) {
    s1.clear();

    std::cin >> s1;

    if (((int)s1[0] + (int)s1[1] + (int)s1[2]) ==
        ((int)s1[3] + (int)s1[4] + (int)s1[5])) {
      result[i] = "YES";
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
