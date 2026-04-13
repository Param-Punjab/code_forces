#include <iostream>

int main() {
  int n = 0;

  std::cin >> n;

  int a[n+1], an[n+1];

  for (int i = 1; i <= n; i++) {
    std::cin >> a[i];
  }

  for (int i = 1; i <= n; i++) {
    an[a[i]] = i;
  }

  for (int i = 1; i <= n; i++) {
    std::cout << an[i] << " ";
  }
  return 0;
}
