#include <iostream>
#include <vector>

int main() {
  int t = 0, n = 0, drop = 0;

  std::cin >> t;

  std::vector<int> my_vector;
  std::vector<std::string> result(t);

  for (int i = 0; i < t; i++) {
    n = 0, drop = 0;

    std::cin >> n;

    my_vector.clear();
    my_vector.resize(n);

    for (int j = 0; j < n; j++) {
      std::cin >> my_vector[j];
    }

    for (int j = 0; j < n; j++) {

      if (my_vector[j] >= my_vector[my_vector.size() - 1]) {
        my_vector.push_back(my_vector[j]);
        my_vector.erase(my_vector.begin() + j);
        result[i].push_back('1');
      } else {

        if (j == 0) {
          continue;
        } else {

          drop++;
          my_vector.erase(my_vector.begin() + j);

          if (drop > 1) {
            result[i].push_back('0');
          } else {
            result[i].push_back('1');
          }
        }
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
