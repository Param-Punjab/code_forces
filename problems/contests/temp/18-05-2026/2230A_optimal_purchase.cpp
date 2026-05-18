#include <iostream>
#include <vector>

int main() {
  int t = 0;
  long long int n = 0, s = 0, g = 0;

  std::cin >> t;

  std::vector<long long int> arr(t, 0);

  for (int i = 0; i < t; i++) {
    std::cin >> n >> s >> g;

    if (g > s) {
      if (n < 3) {
        if (n*s < g) {
          arr[i] = n*s;
          continue;
        } else {
          arr[i] = g;
          continue;
        }
      }
      if ( ((n / 3)*g) + ((n % 3)*s) > (n*s)) {
        arr[i] = n*s;
      } else {
        arr[i] = ((n / 3)*g) + ((n % 3)*s);
      }
    } else {
      if (n < 3) {
        if (n*s < g) {
          arr[i] = n*s;
          continue;
        } else {
          arr[i] = g;
          continue;
        }
      }
      if ( ((n / 3)*s) + ((n % 3)*g) > (n*g)) {
        arr[i] = n*g;
      } else {
      arr[i] = ((n / 3)*s) + ((n % 3)*g);
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << arr[i] << std::endl;
  }

  return 0;
}
