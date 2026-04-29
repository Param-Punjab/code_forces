#include <iostream>

int main() {
  int h_count = 0, e_count = 0, l_count = 0, o_count = 0, j = 0;

  std::string name, final, target = "hello";

  std::cin >> name;

  for (int i = 0; i < name.size(); i++) {
    if (j < target.size() && name[i] == target[j]) {
      final.push_back(name[i]); j++;
    } else {continue;}
  }
  (final == target) ? std::cout << "YES" : std::cout << "NO";
  return 0;
}