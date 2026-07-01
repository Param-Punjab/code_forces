#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0;

  std::cin >> t;

  std::vector<std::string> my_vector(t);

  for (int j = 0; j < t; j++) {
    my_vector.clear();

    std::cin >> my_vector[j];

    for (int i = 0; i < my_vector[j].size(); i++) {
      if (my_vector[j][i] == '4') {
        my_vector[j].erase(i, 1);
      }
    }

    std::cout << my_vector[j] << std::endl;
  }

  return 0;
}
