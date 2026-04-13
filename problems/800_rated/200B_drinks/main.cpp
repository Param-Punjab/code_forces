#include <iomanip>
#include <iostream>

int main() {
  int n, t = 0, c = 0;

  double final;

  std::cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    std::cin >> c;
    t = t + c;
  }

  final = (double)t / (double)n;

  std::cout << std::fixed << std::setprecision(12) << final;

  return 0;
}
