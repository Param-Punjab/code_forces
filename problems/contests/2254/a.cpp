#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int t = 0, counter = 0;
  std::cin >> t;

  std::vector<int> result(t), my_v;

  for (int i = 0; i < t; i++) {
    counter = 0;
    my_v.clear();
    my_v.resize(3);

    for (int j = 0; j < 3; j++) {
      std::cin >> my_v[j];
    }

    sort(my_v.begin(), my_v.end());

    while (true) {
      if (my_v[0] == my_v[1] || my_v[1] == my_v[2] || my_v[0] == my_v[2]) {
        break;
      } else {
        my_v[0]++;
        my_v[2]--;
        sort(my_v.begin(), my_v.end());
        counter++;
      }
    }

    result[i] = counter;
  }

  for (int i = 0; i < t; i++) {
    std::cout << result[i] << std::endl;
  }
}
