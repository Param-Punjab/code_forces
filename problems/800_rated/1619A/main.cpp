#include <iostream>
#include <vector>

int main() {
  int t = 0;
  std::cin >> t;
  std::string my_string, temp_0, temp_1;

  std::vector<std::string> result(t, "YES");

  for (int i = 0; i < t; i++) {
    my_string.erase(), temp_0.erase(), temp_1.erase();
    std::cin >> my_string;

    if (my_string.size() % 2 != 0) {
      result[i] = "NO";
    } else {

      for (int x = 0; x < my_string.size() / 2; x++) {
        temp_0.push_back(my_string[x]);
      }
      for (int x = my_string.size() / 2; x < my_string.size(); x++) {
        temp_1.push_back(my_string[x]);
      }
      if (temp_0 != temp_1) {
        result[i] = "NO";
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
