#include <iostream>
using namespace std;
int main() {
  int police = 0, untreated = 0, n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++) {
    if (arr[i] < 0) {   // if crime happened
      police += arr[i]; // subtract no. of crimes from current police count
      if (police <
          0) { // if police count goes below zero means untreated crime happens
        untreated += police;
        police = 0;
      }
    } else {
      police += arr[i];
    }
  }
  cout << untreated;

  return 0;
}
