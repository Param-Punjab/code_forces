#include <iostream>

int main() {
  std::string str, final;

  std::cin >> str;
  int size = str.size(), c = 0;

  for (int i = 0; i < size; i++) {
    if (str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B') {
      if (!final.empty() && i != size-3 && c == 0) {final.push_back(' '); c++;}
      i += 2;
    } else {
      final.push_back(str[i]);
      c = 0;
    }
  }

  std::cout << final << std::endl;
  return 0;
}
