#include <iostream>
#include <string>

void CHECK(std::string (*arr)) {
  std::string target = "hello";
  int j = 0;

  for (int i = 0; i < (*arr).size(); i++) {
    if ((*arr)[i] == target[j]) {
      j++;
    }
    if (j == target.size()) {
      std::cout << "YES";
      return;
    }
  }
  std::cout << "NO";
}

int main() {
  std::string arr = "hellwo";

  CHECK(&arr);
  return 0;
}
