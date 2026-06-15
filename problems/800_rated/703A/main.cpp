#include <iostream>

int main() {
  int n = 0, a = 0, b = 0, c1 = 0, c2 = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++) {

    std::cin >> a >> b;

    if (a > b) {
      c1++;
    } else if (a < b) {
      c2++;
    } else if (a == b) {
      continue;
    }
  }

  if (c1 > c2) {
    std::cout << "Mishka" << std::endl;
  } else if (c1 == c2) {
    std::cout << "Friendship is magic!^^" << std::endl;
  } else {
    std::cout << "Chris" << std::endl;
  }

  return 0;
}
