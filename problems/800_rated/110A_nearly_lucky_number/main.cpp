#include <iostream>

int main() {
  int count = 0;
  std::string number;
  std::cin >> number;
  for (int i = 0; i < number.size(); i++) {
    if ((int)number[i] == (int)'4' || (int)number[i] == (int)'7') {
      count++;
    }
  }
  if (count == 4 ||  count == 7) {std::cout << "YES";}
  else std::cout << "NO";
}

