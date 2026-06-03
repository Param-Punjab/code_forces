#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <vector>

int main() {
  long long int n = 0, l = 0;
  long double gap = 0.0000000000;

  std::cin >> n >> l;

  std::vector<long long int> la(n);

  for (int i = 0; i < n; i++) {
    std::cin >> la[i];
  }

  std::sort(la.begin(), la.end());

  for (int i = 0; i < n - 1; i++) {
    if (gap < (la[i + 1] - la[i])) {
      gap = (long double)(la[i + 1] - la[i]);
    }
  }

  gap /= 2.0L;

  if (la[0] > gap) {
    gap = la[0];
  }
  if ((l - la[n - 1]) > gap) {
    gap = (l - la[n - 1]);
  }

  std::cout << std::fixed << std::setprecision(10);
  std::cout << gap << std::endl;

  return 0;
}
