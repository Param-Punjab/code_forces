#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool body_or_girl(string name) {
  int size;
  vector<char> v1;
  for (char c : name) {
    size = v1.size();
    for (int i = 0; i < size; i++) {
      if (v1[i]== c) {
        continue;
      } else { v1.push_back(c); }
    }
  }
  size = v1.size();
  if (size % 2 == 0) return 1;
  else return 0;
}

int main() {
  string name;
  cin >> name;

  if (body_or_girl(name)) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
  return 0;
}
