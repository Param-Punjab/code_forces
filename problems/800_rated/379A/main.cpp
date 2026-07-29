#include <iostream>

void empty(int a, int b, int &total) {
  while (true) {
    if (a - b >= 0) {
      total += 1;
      a -= b;
      a += 1;
    } else {
      break;
    }
  }
  return;
}

int main() {
  int a = 0, b = 0, something = 0;
  std::cin >> a >> b;

  int total = a;

  empty(a, b, total);

  std::cout << total << std::endl;
  return 0;
}
