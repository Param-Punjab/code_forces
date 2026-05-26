#include <iostream>
#include <vector>

struct teams {
public:
  int home = 0;
  int guest = 0;
};

int main() {
  int t = 0, c = 0;

  std::cin >> t;

  std::vector<teams> team(t);

  for (int i = 0; i < t; i++) {
    std::cin >> team[i].home >> team[i].guest;
  }

  for (int i = 0; i < t; i++) {
    for (int j = 0; j < t; j++) {
      if (i == j) {
        continue;
      } else {
        if (team[i].home == team[j].guest) {
          c++;
        }
      }
    }
  }

  std::cout << c << std::endl;
}
