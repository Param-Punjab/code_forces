#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n = 0, q = 0, count = 0, temp = 0;

  std::cin >> n;

  std::vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  std::cin >> q;

  std::vector<int> results(q);

  std::sort(arr.begin(), arr.end());

  for (int i = 0; i < q; i++) {
    int begin = 0, end = n - 1, mid = end / 2;

    std::cin >> temp;

    while (true) {
      if (mid == 0 && arr[mid] > temp) {
        results[i] = 0;
      } else if ((arr[mid] < temp && arr[mid + 1] > temp) || mid == temp) {
        results[i] = n - mid;
        break;
      } else if ((arr[mid] > temp && arr[mid - 1] < temp)) {
        results[i] = (n - mid) - 1;
        break;
      } else if (arr[mid] > temp) {
        end = mid;
        mid = end / 2;
      } else if (arr[mid] < temp) {
        begin = mid;
        mid = (end + begin) / 2;
      }
    }
  }

  for (int i = 0; i < q; i++) {
    std::cout << results[i] << std::endl;
  }

  return 0;
}
