#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int q;
    cin >> q;
    int first = -1, last = -1;
    int drops = 0;
    bool has = false;
    string ans = "";

    for (int i = 0; i < q; i++) {
      int x;
      cin >> x;

      if (!has) {
        first = last = x;
        has = true;
        ans += '1';
        continue;
      }

      int old = drops;

      if (last > first)
        drops--;

      if (last > x)
        drops++;
      if (x > first)
        drops++;

      if (drops <= 1) {
        last = x;
        ans += '1';
      } else {
        drops = old;
        ans += '0';
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
