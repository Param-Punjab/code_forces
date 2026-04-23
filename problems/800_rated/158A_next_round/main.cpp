#include <iostream>
#include <vector>

int main() {
    int n, k, c = 0;

    std::cin >> n >> k;

    std::vector<int> arr(n, 0);

    for (int i = 0; i < n; i++) {
      std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
      if (arr[i] >= arr[k-1] && arr[i] > 0) {
        c++;
      }
    }
    std::cout << c;
    return 0;
}
