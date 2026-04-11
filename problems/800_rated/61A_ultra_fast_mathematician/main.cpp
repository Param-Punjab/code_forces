#include <iostream>

int main() {
  std::string s1, s2, s3;
  std::cin >> s1 >> s2;
  s3 = s1;

  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] == s2[i]) {
      s3[i] = '0';
    } else {
      s3[i] = '1';
    }
  }

  std::cout << s3;
  return 0;
}