#include <iostream>

int main() {
  int m = 0, n = 0;
  char temp;

  std::string answer = "#Black&White";

  std::cin >> m >> n;

  for (int i = 0; i < m * n; i++) {
    std::cin >> temp;

    if (temp != 'W' && temp != 'B' && temp != 'G') {
      answer = "#Color";
      break;
    }
  }

  std::cout << answer << std::endl;
  return 0;
}
