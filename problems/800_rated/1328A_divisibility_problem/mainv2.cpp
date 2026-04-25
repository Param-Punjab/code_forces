#include <iostream>
#include <cmath>
#include <vector>

int main() {
  int n = 0, temp = 0;

  std::cin >> n;

  std::vector<std::vector<long long int>> array(n, std::vector<long long int>(2, 0));

  std::vector<long long int> final(n, 0);

  for (int i = 0; i < n; i++) {
    std::cin >> array[i][0] >> array[i][1];
  }

  for (int i =  0; i < n; i++) {
    if (array[i][0] % array[i][1] == 0) {
      final[i] = 0;
      continue;
    }
    temp = std::ceil(array[i][0] / static_cast<double>(array[i][1]));
    temp = temp * array[i][1];
    temp = temp - array[i][0];
    final[i] = temp;
  }

  for (int i = 0; i < n; i++) {
    std::cout << final[i] << std::endl;
  }

  return 0;
}
