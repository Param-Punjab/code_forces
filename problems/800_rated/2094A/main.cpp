#include <iostream>
#include <string>
#include <vector>

int main() {
  int t;
  std::cin >> t;
  std::cin.ignore();

  std::vector<std::string> result(t);

  for (int i = 0; i < t; i++) {
    std::string my_string;
    std::getline(std::cin, my_string);

    result[i].push_back(my_string[0]);

    for (int z = 0; z < my_string.size(); z++) {
      if (my_string[z] == ' ' && z + 1 < my_string.size()) {
        result[i].push_back(my_string[z + 1]);
      }
    }
  }

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i] << std::endl;
  }
}
