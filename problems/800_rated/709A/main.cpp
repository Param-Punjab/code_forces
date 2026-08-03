#include <iostream>
#include <vector>

int main() {
  int n = 0, b = 0, d = 0, empty = 0, container = 0;

  std::cin >> n >> b >> d;

  std::vector<int> my_v(n);

  for (int i = 0; i < n; i++) {
    std::cin >> my_v[i];
    if (my_v[i] <= b) {
      if ((container + my_v[i]) <= d) {
        container += my_v[i];
      } else {
        empty++;
        container = 0;
      }
    }
  }

  std::cout << empty << std::endl;
  ;

  return 0;
}
