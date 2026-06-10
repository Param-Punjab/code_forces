#include <iostream>
#include <vector>

int main() {
  int t = 0, l = 0, l_10 = 0, h = 0, h_10 = 0;

  bool l_t = 0, l_10_t = 0;

  std::cin >> t;

  int arr[4] = {0};

  std::vector<int> result(t, 0);

  for (int z = 0; z < t; z++) {
    l = 0;
    l_10 = 0;

    h = 0;
    h_10 = 0;

    l_t = 0;
    l_10_t = 0;

    std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    l_10 += arr[1] * arr[3];
    h_10 += arr[3];

    if (arr[0] == 1) {
      result[z] = 1;
      continue;
    }

    while (true) {
      if (l_t != 1) {
        if (l < arr[0]) {
          l += (arr[1] + arr[2]);
          h += 1;
        } else {
          l_t = 1;
        }
      }

      if (l_10_t != 1) {
        if (l_10 < arr[0]) {
          l_10 += (arr[1] + (arr[2] * 10));
          h_10 += 1;
        } else {
          l_10_t = 1;
        }
      }

      if (l_t == 1 && l_10_t == 1) {
        break;
      }
    }

    h <= h_10 ? result[z] = h : result[z] = h_10;
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }
}
