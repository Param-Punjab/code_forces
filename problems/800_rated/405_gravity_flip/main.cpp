#include <iostream>

int main() {
  int n = 0, temp = 0;

  std::cin >> n;

  int arr[n] = {0};

  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  for (int i = n-1; i > 0; i--) {
    for (int j = i-1; j >= 0; j--) {
      if (arr[i] < arr[j]) {
        temp = arr[j] - arr[i];
        arr[j] -= temp;
        arr[i] += temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    std::cout << arr[i] << " ";
  }

  return 0;
}