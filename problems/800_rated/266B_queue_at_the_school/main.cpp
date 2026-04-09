#include <iostream>
#include <string>
using namespace std;

int main() {
  int n, t;
  cin >> n >> t;

  string arr;
  cin >> arr;

  while (t != 0) {
    string next = arr;

    for (int i = 0; i < n - 1; i++) {
      if (arr[i] == 'B' && arr[i+1] == 'G') {
        next[i] = 'G';
        next[i+1] = 'B';
        i++;
      }
    }
    arr = next;
    t--;
  }
  cout << arr << endl;
}
