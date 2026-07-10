#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    string s;
    cin >> s;
    int zeros = 0, ones = 0;
    for (char c : s) {
      if (c == '0')
        zeros++;
      else
        ones++;
    }

    int kept = 0;
    for (char c : s) {
      if (c == '0') {
        if (ones > 0) {
          ones--;
          kept++;
        } else {
          break;
        }
      } else { // c == '1'
        if (zeros > 0) {
          zeros--;
          kept++;
        } else {
          break;
        }
      }
    }
    cout << (int)s.size() - kept << '\n';
  }
  return 0;
}
