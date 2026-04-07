#include <iostream>

std::string lower_case(std::string my_string) {
  for (int i = 0; i < my_string.size(); i++) {
    if((int)my_string[i] >= 65 && (int)my_string[i] <= 90) {
      my_string[i] = char((int)my_string[i]+32);
    }
  }
  return my_string;
}
int main() {
  std::string f_string, s_string;
  std::cin >> f_string;
  std::cin >> s_string;

  f_string = lower_case(f_string);
  s_string = lower_case(s_string);

  if (f_string < s_string) {
    std::cout << -1;
  } else if (f_string > s_string) {
    std::cout << 1;
  } else {
    std::cout << 0;
  }
}

