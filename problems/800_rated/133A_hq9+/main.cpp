#include <iostream>

int main() {
  std::string my_string;

  std::cin >> my_string;

  for (char c : my_string) {
    if (c == 'H' || c == 'Q' || c == '9') {
      std::cout << "YES";
      return 0;
    }
  }
  std::cout << "NO";
  return 0;
}