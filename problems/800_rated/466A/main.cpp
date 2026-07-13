#include <algorithm>
#include <iostream>

int main() {
  int n = 0, m = 0, a = 0, b = 0, normal_cost = 0, offer_cost = 0, only = 0;

  int calculator = 0;

  std::cin >> n >> m >> a >> b;

  calculator = n / m;

  offer_cost = n - (calculator * m);
  offer_cost *= a;
  offer_cost += calculator * b;

  normal_cost = n * a;

  if (calculator * m == n) {
    only = calculator * b;
  } else {
    only = (calculator + 1) * b;
  }

  std::cout << std::min({offer_cost, normal_cost, only});

  return 0;
}
