#include <iostream>
using namespace std;

void m(int &a, int &b) {
  a *= 3;
  b *= 2;
}

int main() {
  int a, b, c = 0;
  cin >> a >> b;
  while(a <= b) {
    c++;
    m(a, b);
  }
  cout << c;
}
