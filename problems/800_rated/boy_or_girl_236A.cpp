#include <iostream>
#include <vector>
using namespace std;

bool boy_or_girl(string name) {
  int size;
  bool yes = 0;
  vector<char> v1;
  for (char c : name) {
    size = v1.size();
    if (size == 0) {
      v1.push_back(c);
    } else {
      for (int i = 0; i < size; i++) {
        if (v1[i] == c) {
          yes = 1;
          continue;
        }
      }
      if (!yes) {
        v1.push_back(c);
      }
      yes = 0;
    }
  }
  size = v1.size();
  if (size % 2 == 0)
    return 1;
  else
    return 0;
}

int main() {
  string name;
  cin >> name;

  if (boy_or_girl(name)) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
}
