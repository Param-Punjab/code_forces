#include <iostream>
using namespace std;

int main() {
  string word;
  cin >> word;
  char c = 'a';
  if ((int)word[0] >= 97 && (int)word[0] <= 122) {
    word[0] = char((int)word[0] - 32);
  }
  cout << word << endl;
}
