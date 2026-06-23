#include <algorithm>
#include <iostream>
#include <vector>

int main() {

  std::vector<int> array(3);
  std::cin >> array[0] >> array[1] >> array[2];

  sort(array.begin(), array.end());

  if (array[2] - array[0] >= 10) {
    std::cout << "check again" << std::endl;
  } else {
    std::cout << "final " << array[1] << std::endl;
  }

  return 0;
}
