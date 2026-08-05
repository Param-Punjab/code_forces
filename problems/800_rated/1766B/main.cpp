#include <iostream>
#include <string>
#include <vector>

bool checker(std::string my_string, std::string temp) {
  for (int i = 0; i < my_string.size() - 1; i++) {
    if (temp[0] == my_string[i] && temp[1] == my_string[i + 1]) {
      return 1;
    }
  }
  return 0;
}

int main(int argc, char *argv[]) {

  int t = 0;
  std::cin >> t;

  std::vector<std::string> result(t, "NO");
  std::string my_string, temp, target;

  for (int i = 0; i < t; i++) {
    my_string.clear();
    temp.clear();
    target.clear();

    std::cin >> my_string;

    for (int j = 0; j < my_string.size() - 1; j++) {

      if (j > 1) {
        target.clear();

        target = {my_string[j], my_string[j + 1]};

        if (checker(temp, target)) {

          result[i] = "YES";
          break;
        } else {
          temp.push_back(my_string[j]);
        }
      } else {
        temp.push_back(my_string[j]);
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
