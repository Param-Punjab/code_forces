#include <iostream>
#include <string>

int main() {
  std::string my_string;
  std::cin >> my_string;

  bool cap = true;

  for (int i = 1; i < my_string.size(); i++) {
    if (my_string[i] >= 'A' && my_string[i] <= 'Z') {} 
    else cap = false;
  }

  if (cap == true) {

    if (my_string[0] >= 'a' && my_string[0] <= 'z') my_string[0] = (char)((int)my_string[0] - 32);
    else {
      my_string[0] = (char)((int)my_string[0] + 32);
    }

    for (int i = 1; i < my_string.size(); i++) {
      if (my_string[i] >= 'A' && my_string[i] <= 'Z') my_string[i] = (char)((int)my_string[i] + 32);
    }

  }

  std::cout << my_string << std::endl;

  return 0;
}