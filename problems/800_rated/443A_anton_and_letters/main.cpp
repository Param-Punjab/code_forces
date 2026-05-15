#include <iostream>
#include <string>
#include <set>

int main() {
  std::set<char> my_set;
  std::string my_string;

  std::getline(std::cin, my_string);

  for (int i = 0; i < my_string.size(); i++)
  {
    if (my_string[i] == '{' || my_string[i] == '}' || my_string[i] == ' ' || my_string[i] == ',') {
      continue;
    } else {
      my_set.insert(my_string[i]);
    }
  }

  std::cout << my_set.size() << std::endl;
  return 0;
}