#include <iostream>

bool checker(std::string &my_string) {
  for (int i = 0; i < my_string.size() - 1; i++) {
    if (my_string[i] == '1' && my_string[i + 1] == '2') {
      return false;
    } else if (my_string[i] == '3' && my_string[i + 1] == '2') {
      return false;
    }
  }
  return true;
}

void correcter(std::string &my_string, int &counter) {
  for (int i = 0; i < my_string.size() - 1;) {
    if (my_string[i] == '1' && my_string[i + 1] == '2') {
      my_string.erase(i + 1, 1);
      counter++;
    } else if (my_string[i] == '3' && my_string[i + 1] == '2') {
      my_string.erase(i + 1, 1);
      counter++;
    } else {
      i++;
    }
  }
  return;
}

int main() {
  int counter = 0, t = 0;
  bool check = 0;

  std::string my_string;

  std::cin >> t;

  for (int j = 0; j < t; j++) {
    my_string.erase();

    std::cin >> my_string;

    counter = 0, check = 0;

    for (int i = 0; i < my_string.size();) {
      if (my_string[i] == '4') {
        my_string.erase(i, 1);
        counter++;
      } else {
        i++;
      }
    }

    if (my_string.size() == 0) {
      std::cout << counter << std::endl;
      continue;
    }

    while (true) {
      check = checker(my_string);
      if (check == false) {
        correcter(my_string, counter);
      } else {    
        break;
      }
    }
    std::cout << counter << std::endl;
  }

  return 0;
}
