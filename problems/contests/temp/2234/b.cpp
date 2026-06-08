#include <iostream>
#include <string>
#include <vector>

int main() {
  int t = 0;
  long long int n = 0;

  std::string s1, s2;

  std::cin >> t;

  std::vector<std::vector<long long int>> pre(t,
                                              std::vector<long long int>(2, 0));

  std::vector<std::string> result(t, "-1");

  for (int k = 0; k < t; k++) {
    std::cin >> n;

    for (long long int i = 1; pre[k][1] < n; i++) {
      pre[k][1] = i * 12;
      pre[k][0] = n - pre[k][1];

      if (pre[k][0] >= 22) {
        result[k] = std::to_string(pre[k][0]) + " " + std::to_string(pre[k][1]);
        break;
      } else {
        s1.clear();
        s2.clear();
        s1 = pre[k][0];
        for (int s = s1.size() - 1; s >= 0; s--) {
          s2.push_back(s1[s]);
        }

        if (s1 == s2) {
          result[k] =
              std::to_string(pre[k][0]) + " " + std::to_string(pre[k][1]);
          break;
        }
      }
    }
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }
}
