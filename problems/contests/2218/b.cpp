#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  int t = 0, sum = 0; 

  std::cin >> t;

  std::vector<int> my_vector(7);
  std::vector<int> result(t);

  for (int i = 0; i < t; i++) {
    for (int j = 0; j < 7; j++) {
      std::cin >> my_vector[j];
    }

    std::sort(my_vector.begin(), my_vector.end());

    for (int j = 0; j < 6; j++) {
      my_vector[j] = -my_vector[j];
    }

    for (int j = 0; j < 7; j++) {
      result[i] += my_vector[j];
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}