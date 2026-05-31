#include <iostream>
#include <vector>

int main() {
  int n = 0, k = 0, time = 0, problems = 0;

  std::cin >> n >> k;

  time = 240 - k;

  std::vector<int> times(n);

  for (int i = 1; i <= n; i++) {
    times[i - 1] = 5 * i;
  }

  for (int t : times) {
    if (t == time) {
      problems++;
      break;
    } else if (t < time) {
      problems++;
      time -= t;
    } else {
      break;
    }
  }

  std::cout << problems << std::endl;

  return 0;
}