#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

struct el {
  int large = 0;
  int small = 0;
  int frequent;
};

el frequency(std::vector<int> v) {
  el result;

  std::sort(v.begin(), v.end());

  int position = 0, count = 1, count_max = 1;

  for (int i = 0; i < v.size()-1; i++) {
    if (v[i] == v[i+1]) {
      count++;
      if (count > count_max) {
        count_max = count;
        result.frequent = v[i];
      }
    } else {
      count = 1;
    }
  }


  if (count_max == 1) {
    result.frequent = std::ceil(v[(v.size()-1)/2]);
  }

  for (int i = 0; i < v.size(); i++) {
    if (v[i] < result.frequent) {
      result.small++;
    } else if (v[i] > result.frequent) {
      result.large++;
    }
  }
  return result;
}
int main() {
  int test = 0, n = 0, t = 0, call = 0; 

  std::cin >> test;
  std::vector<int> run(test);
  std::vector<int> result(test);

  for (int i = 0; i < test; i++) {
    call = 0;
    std::cin >> n;

    run.resize(n);

    for (int j = 0; j < n; j++) {
      std::cin >> run[j];
    }

    el c = frequency(run);

    if (c.small != c.large) {
      if (c.small > c.large) {
        if (c.large % 2 == 0) {
          call += c.large / 2;
        } else {
          call += c.large / 2;
          call++;
        }

        t = c.small - c.large;
        call += t;
      } else {
        if (c.small % 2 == 0) {
          call += c.small / 2;
        } else {
          call += c.small / 2;
          call++;
        }

        t = c.large - c.small;
        call += t;
      }
    } else {
      call += c.small;
    }
    result[i] = call;
  }

  for (int i = 0; i < test; i++) {
    std::cout << result[i] << std::endl;
  }

  return 0;
}