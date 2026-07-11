#include <iostream>
#include <vector>

int main() {
  int event = 0, cop = 0, crime = 0;

  std::cin >> event;

  std::vector<int> my_v(event);

  for (int i = 0; i < event; i++) {
    std::cin >> my_v[i];

    if (my_v[i] == -1) {
      if (cop != 0) {
        cop--;
      } else {
        crime++;
      }
    } else {
      cop += my_v[i];
    }
  }
  std::cout << crime << std::endl;
}