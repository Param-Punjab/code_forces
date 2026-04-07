#include <iostream>

int main() {
  std::string my_string, other_string, final, f;
  std::cin >> my_string;
  int n = my_string.size();
  for (int i = 0; i < n; i += 2) {
    other_string.push_back(my_string[i]);
  }
  int s = other_string.size();

  for (int i = 0; i < s; i++) {
    if (other_string[i] == '1') {
      final.push_back(other_string[i]);
    }
  }

  for (int i = 0; i < s; i++) {
    if (other_string[i] == '2') {
      final.push_back(other_string[i]);
    }
  }

  for (int i = 0; i < s; i++) {
    if (other_string[i] == '3') {
      final.push_back(other_string[i]);
    }
  }


  f.push_back(final[0]);
  for (int i = 1; i < s; i++) {
    f.push_back('+');
    f.push_back(final[i]);
  }
  std::cout << f << std::endl;
}
