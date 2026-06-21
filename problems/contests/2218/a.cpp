#include <iostream>
#include <vector>

int main() {
  int t = 0; 

  std::cin >> t;  

  std::vector<int> my_vector(t);
  std::vector<int> result(t);

  for (int i = 0; i < t; i++) {
    std::cin >> my_vector[i];
    if (my_vector[i] == 67 || my_vector[i] == -68) {
      result[i] = my_vector[i];
    } else {
    result[i] = my_vector[i] + 1;
    }

  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}