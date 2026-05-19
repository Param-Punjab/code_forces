#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  int t = 0;

  std::string s;
  std::cin >> t;

  std::vector<std::string> yes(8), final(t);

  yes = {
    "YES", "yES", "YeS", "YEs",
    "yes", "Yes", "yEs", "yeS"
  };

  for (int i = 0; i < t; i++) {
    std::cin >> s;
    auto it = std::find(yes.begin(), yes.end(), s);
    if (it != yes.end()) {
      final[i] = "YES";
    } else {
      final[i] = "NO";
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << final[i] << std::endl;
  }

  return 0;
}
