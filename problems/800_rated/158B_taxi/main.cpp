#include <iostream>

int main() {
  int n, t, c = 0;
  float taxi = 0;

  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> t;
    c = c+t;
  }

  taxi = (float)c / 4;

  t =  (int)taxi;

  taxi -= t;
  if (taxi != 0) {
    std::cout << ++t;
    return 0;
  }

  std::cout << t;
  return 0;
}
