#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> frequent_vector(std::vector<int> *arr) {
  int size = (*arr).size();
  std::sort((*arr).begin(), (*arr).end());
  std::vector<int> f_vector;

  for (int i = 0; i < size-1; i++) {
    if ((*arr)[i] == (*arr)[i+1]) {
      continue;
    } else {
      f_vector.push_back((*arr)[i]);
    }
  }
  if (size > 0) {
    f_vector.push_back((*arr)[size-1]);
  }
  return f_vector;
}

int main() {
  int t = 0;
  std::cin >> t;

  int x = 0, y = 0;

  std::vector<int> final;
  for (int i = 1; i <= t; i++) {
    final.push_back(i);
  }

  std::cin >> x;
  std::vector<int> p1(x, 0);
  for (int i = 0; i < x; i++) {
    std::cin >> p1[i];
  }

  std::cin >> y;
  std::vector<int> p2(y, 0);
  for (int i = 0; i < y; i++) {
    std::cin >> p2[i];
  }

  p1.insert(p1.end(), p2.begin(), p2.end());

  p1 = frequent_vector(&p1);

  if (p1.size() == final.size()) {std::cout << "I become the guy.";}
  else {std::cout << "Oh, my keyboard!";}

  return 0;
}