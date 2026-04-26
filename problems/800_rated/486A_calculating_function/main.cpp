#include <iostream>
#include <cmath>

int main() {
  long long int n = 0;
  long long int a = 0;
  long long int b = 0;
  std::cin >> n;

  // even
  if (n == 0) {return 1;}
  if (n % 2 == 0) { a = n/2; }
  else { a = (n-1)/2;}

  // odd
  if (n % 2 == 0) { b = n/2;}
  else { b = std::ceil((double)n/2); }

  long long int result = (a*(a+1)) - (b*b);

  std::cout << result << std::endl;
  return 0;
}
