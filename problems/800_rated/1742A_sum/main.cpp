#include <iostream>
#include <vector>

int main() {
  int t = 0;

  std::cin >> t;

  std::vector<int> arr(3, 0);
  std::vector<std::string> answer(t, "NO");

  for (int i = 0; i < t; i++) {
    std::cin >> arr[0] >> arr[1] >> arr[2];

    if ((arr[0] == arr[1] + arr[2]) || (arr[1] == arr[0] + arr[2]) ||
        (arr[2] == arr[0] + arr[1])) {
      answer[i] = "YES";
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << answer[i] << std::endl;
  }

  return 0;
}
