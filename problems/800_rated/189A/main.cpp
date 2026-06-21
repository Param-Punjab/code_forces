#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n = 0, count = 0, c = 0;

  std::cin >> n;

  std::vector<int> arr(3);

  std::cin >> arr[0] >> arr[1] >> arr[2];

  std::sort(arr.begin(), arr.end());

  for (int i = 0; i < 3; i++) {
    if (count + arr[i] <= n) {
      count += arr[i];
      c++;
    }
  }

  std::cout << c << std::endl;
  return 0;
}
