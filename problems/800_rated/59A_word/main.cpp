#include <iostream>

std::string claculator(std::string my_string) {
  int s = my_string.size();
  int u,l;
  u = 0; l = 0;
  for (int i = 0; i < s; i++) {
    if ((int)my_string[i] >= 65 && (int)my_string[i] <= 90) {
      u++;
    }
    if ((int)my_string[i] >= 97 && (int)my_string[i] <= 122) {
      l++;
    }
  }
  if (u > l) {
    for (int i = 0; i < s; i++) {
      if ((int)my_string[i] >= 97 && (int)my_string[i] <= 122) {
        my_string[i] = (char)((int)my_string[i]-32);
      }
    }
  } else {
    for (int i = 0; i < s; i++) {
      if ((int)my_string[i] >= 65 && (int)my_string[i] <= 90) {
        my_string[i] = (char)((int)my_string[i]+32);
      }
    }
  }
  return my_string;
}

int main() {
  std::string my_string;
  std::cin >> my_string;
  my_string = claculator(my_string);
  std::cout << my_string;
}
