#include <iostream>

int main() {
  int n, c = 0;

  std::cin >> n;

  int arr[n][2];

  for (int i = 0; i < n; i++) {
    std::cin >> arr[i][0] >> arr[i][1];
    if(arr[i][0] < arr[i][1]-1) {c++;}
  }
  std::cout << c;
  return 0;
}
