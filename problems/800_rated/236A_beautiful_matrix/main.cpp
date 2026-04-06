#include <iostream>
using namespace std;


int main() {
  int c,r = 0;
  int arr[5][5];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> arr[i][j];
      if (arr[i][j]) {r = i; c= j;}
    }
  }
  cout << abs(r-2)+abs(c-2) << endl;
}
