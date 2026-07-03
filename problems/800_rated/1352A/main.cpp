#include <iostream>
#include <functional>
#include <vector>

std::string my_function(int index, char digit, int size) {
  std::string s1;

  s1.push_back(digit);

  int value = size - (index+1); 

  for (int i = 0; i < value; i++) {
    s1.push_back('0');
  }

  return s1;
}

int main() {
  int t = 0;
  std::cin >> t;

  std::string my_string;
  std::vector<std::string> answers;

  while(t--) {
    my_string.erase();
    answers.clear();

    std::cin >> my_string;

    for (int i = 0; i < my_string.size(); i++) {
      if (my_string[i] != '0') {
        answers.push_back(my_function(i, my_string[i], my_string.size()));
      }
    }

    std::cout << answers.size() << std::endl;
    for (int i = 0; i < answers.size(); i++) {
      std::cout << answers[i] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}