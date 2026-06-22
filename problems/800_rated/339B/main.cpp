#include <iostream>
#include <vector>

int main() {
  int n = 0, m = 0; 
  long long distance = 0;

  std::cin >> n >> m;

  std::vector<int> task(m+1);
  task[0] = 1;
  for (int i = 1; i <= m; ++i) {
    std::cin >> task[i];
  }

  for (int i = 0; i < m; i++) {
    if (task[i] < task[i + 1]) {
      distance += task[i + 1] - task[i];
    } else if (task[i] > task[i + 1]) {
      distance += (n - task[i]) + task[i + 1];
    } else {
      distance += 0;
    }
  }

  std::cout << distance << std::endl;
  return 0; 
}