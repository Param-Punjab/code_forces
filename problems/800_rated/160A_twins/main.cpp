#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

int main() {
  int n = 0, min = 100;
  int t1 = 0, t2 = 0;

  std::vector<int> arr(n, 0);

  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  t1 = std::ceil((n-1) / 2);
  t2 = t1;
  t1 += 1;

  return 0;
}