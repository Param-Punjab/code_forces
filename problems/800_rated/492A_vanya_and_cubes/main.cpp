#include <iostream>

int gdn(int level) {
  int count = 0;

  for (int i = 1; i <= level; i++) {
    count += i;
  }

  return count;
}

int main() {

  int old_count = 0, count = 0, die = 0, level = 1;

  std::cin >> die;

  while (true) {
    count += gdn(level);
    if (count <= die) {
      old_count = count;
      level++;
    } else {
      level -= 1;
      break;
    }
  }

  std::cout << level << std::endl;
  return 0;
}
