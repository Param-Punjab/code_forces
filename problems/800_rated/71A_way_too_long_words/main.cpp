#include <iostream>
using namespace std;

int main() {
  int n,s;
  cin >> n;
  string words[n];
  for (int i = 0; i < n; i++) {
    cin >> words[i];
  }
  for (int i = 0; i < n; i++) {
    if (words[i].size() <= 10) {
      cout << words[i] << endl;
    } else {
      s = words[i].size();
      cout << words[i][0] << s-2 << words[i][s-1] << endl;
    }
  }
}
