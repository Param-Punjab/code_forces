#include <iostream>
using namespace std;

string filter(string my_string) {
  string s;
  for (char c : my_string) {
    if ((int)c >= 65 && (int)c <= 90) {
      c = char((int)c + 32);
    }
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      continue;
    } else {
      s.push_back('.');
      s.push_back(c);
    }
  }
  return s;
}

int main() {
  string my_string;
  cin >> my_string;
  cout << filter(my_string);
}
