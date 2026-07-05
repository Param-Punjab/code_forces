#include <iostream>
#include <vector>

int main() {
  int t = 0;

  std::cin >> t;

  std::string my_string;
  std::vector<std::string> my_vector;

  while (t--) {
    my_string.erase();

    std::cin >> my_string;

    for (int i = 0; i < my_string.size();) {
      if (my_string[i] == '4') {
        my_string.erase(i, 1);
      } else {
        i++;
      }
    }

    my_vector.push_back(my_string);
  }

  std::cout << std::endl;

  std::cout << "After remove 4: " << std::endl;

  for (int i = 0; i < my_vector.size(); i++) {
    std::cout << my_vector[i] << std::endl;
  }

  return 0;
}
