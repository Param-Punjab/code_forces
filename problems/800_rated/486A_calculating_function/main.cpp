#include <iostream>

int main() {
  int n;

  std::cin >> n;

  int even = n/2;
  int odd = 0;

  if (n%2==0) {
    odd = n/2;
  } else {
    odd = (n/2)+1;
  }

  std::cout << even-odd << std::endl;


  return 0;
}
