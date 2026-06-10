#include <cmath>
#include <iostream>
#include <string>
#include <vector>

int main() {
  int t = 0, n = 0, min = 2147483647, max = 0, first = 0, k = 0;

  std::cin >> t;

  std::vector<int> pre;
  std::vector<int> index;
  std::vector<std::string> result(t, "YES");

  for (int z = 0; z < t; z++) {
    std::cin >> n;

    min = 2147483647; 
    max = 0;
    first = 0;
    k = 0;

    pre.clear();
    index.clear();
    pre.resize(n);

    for (int i = 0; i < n; i++) {
      std::cin >> pre[i];

      if (min > pre[i]) {
        min = pre[i];
      }

      if (max < pre[i]) {
        max = pre[i];
      } else {
        index.push_back(i);
      }
    }

    if (index.size() == 0) {
      continue;
    }
    k = pre[index[0]+1] - pre[index[0]];

    for (int i = 0; i < index.size(); i++) {
      pre[index[i]] += k;
    }

    min = pre[0];

    for (int i = 1; i < n; i++) {
      if (min <= pre[i]) {
        min = pre[i];
      } else {
        result[z] = "NO";
        break;
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}
