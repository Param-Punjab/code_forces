#include <iostream>
#include <string>
#include <vector>

int main() {
  int t = 0, n = 0, m = 0, count = 0, c = 0;

  std::cin >> t;

  std::vector<std::string> my_vector;

  for (int i = 0; i < t; i++) {
    n = 0, m = 0, count = 0, c = 0;

    std::cin >> n >> m;

    my_vector.clear();
    my_vector.resize(n);

    for (int z = 0; z < n; z++) {
      std::cin >> my_vector[z];
    }

    for (int z = 0; z < n; z++) {

      if ((c + my_vector[z].size()) <= m) {
        c += my_vector[z].size();
        count++;
      } else
        break;
    }

    std::cout << count << std::endl;
  }

  return 0;
}
