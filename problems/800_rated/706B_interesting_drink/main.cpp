#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int n = 0, q = 0, count = 0;

  std::cin >> n;

  std::vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  std::cin >> q;

  std::vector<int> queries(q);
  std::vector<int> results(q);

  for (int i = 0; i < q; i++) {
    std::cin >> queries[i];
  }

  sort(arr.begin(), arr.end());

  for (int j = 0; j < q; j++) {

    for (int i = arr.size() - 1; i >= 0; i--) {
      if (queries[j] >= arr[i]) {
        count++;
      } 
    }

    results[j] = count;
    count = 0;
  }

  for (int i = 0; i < q; i++) {
    std::cout << results[i] << std::endl;
  }

  return 0;
}
