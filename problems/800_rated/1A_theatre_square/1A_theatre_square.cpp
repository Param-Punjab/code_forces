#include <iostream>
#include <cmath>

int main() {
  long long n, m, a, final = {0};
  std::cin >> n >> m >> a;

  final = (std::ceil((double)m / a) * std::ceil((double)n / a));

  std::cout << final << std::endl;

  return 0;
}