#include <algorithm>
#include <iostream>
#include <vector>

struct node {
  int id;
  std::vector<int> index, value;

  void fucker(int n, int i, std::vector<int> &my_v,
              std::vector<bool> &checker) {
    int i_index = ((i + 1) * 2) - 1;

    if ((i_index + 1) <= n) {

      if (checker[i_index] != 1) {

        checker[i_index] = 1;
        this->index.push_back(i_index);
        this->value.push_back(my_v[i_index]);
        fucker(n, i_index, my_v, checker);
        return;
      } else {

        fucker(n, i_index, my_v, checker);
        return;
      }
    }
    return;
  }

  void sort() {
    std::sort(value.begin(), value.end());
    return;
  }

  void printer() {
    for (int i = 0; i < this->index.size(); i++) {
      std::cout << this->index[i] << " : " << this->value[i] << std::endl;
    }
  }

  void fitting(std::vector<int> &temp) {
    for (int i = 0; i < this->index.size(); i++) {
      temp[index[i]] = value[i];
    }
  }
};

int main() {
  int t = 0, n = 0;

  std::cin >> t;

  std::vector<int> my_v;
  std::vector<node> nodes;
  std::vector<bool> checker;
  std::vector<int> temp;
  std::vector<std::string> result(t, "YES");

  for (int z = 0; z < t; z++) {
    n = 0, my_v.clear(), temp.clear(), checker.clear(), nodes.clear();
    std::cin >> n;

    my_v.resize(n), temp.resize(n), checker.resize(n, 0);

    for (int i = 0; i < n; i++) {
      std::cin >> my_v[i];
    }

    for (int i = 0; i < n; i++) {
      if (checker[i] != 1) {
        checker[i] = 1;
        nodes.push_back(node());
        nodes.back().id = i + 1;
        nodes.back().index.push_back(i);
        nodes.back().value.push_back(my_v[i]);
        nodes.back().fucker(n, i, my_v, checker);
        nodes.back().sort();
        nodes.back().fitting(temp);
      }
    }

    for (int i = 0; i < n; i++) {
      if (temp[i] != i + 1) {
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
