#include <iostream>
#include <map>

int main() {
  std::map<std::string, int> my_map;

  int t = 0, mx = 0;

  std::cin >> t;
  std::string my_string, winner;

  while (t--) {
    my_string.erase();

    std::cin >> my_string;

    my_map[my_string]++;
  }

  for (auto x : my_map) {
    if (x.second > mx) {
      mx = x.second;
      winner = x.first;
    }
  }

  std::cout << winner << std::endl;

  return 0;
}
