#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool boy_or_girl(string name) {
  cout << "Inside boy_or_girl()" << endl;
  int size;
  bool yes = 0;
  cout << "init a variable size" << endl;
  vector<char> v1;
  cout << "init v1" << endl;
  for (char c : name) {
    cout << "Inside for loop selected variable: " << c << " from name " << endl;
    size = v1.size();
    cout << "size got from v1.size() size: " << size << endl;
    if (size == 0) {
      v1.push_back(c);
    } else {
      for (int i = 0; i < size; i++) {
        cout << "Inise for loop which runs till " << size-1 << endl;
        if (v1[i]== c) {
          cout << "Check if statement what ever " << v1[i] << " == " << c << " or not" << endl;
          cout << "it in v1 so skip it to add" << endl;
          yes = 1;
          continue;

        }
      }
      if (!yes) {
        cout << c << " is not in v1 so now it's time for push it into v1" << endl;
        v1.push_back(c);
        cout << "successfully pushed" << endl;
      }
    }
  }
  size = v1.size();
  if (size % 2 == 0) return 1;
  else return 0;
}

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

  if (boy_or_girl(name)) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
  return 0;
}
