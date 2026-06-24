#include <iostream>
#include <string>
#include <vector>

void operation_0(std::vector<char> &result, int i, bool h = false);
void operation_1(std::vector<char> &result, int i, bool h = false);
void operation_2(std::vector<char> &result);

void operation_0(std::vector<char> &result, int i, bool h) {

  if ((result[i] == '?' || result[i] == '-') && i < result.size() - 1) {
    if (h == true) {
      operation_0(result, i + 1, true);
    } else {
      operation_0(result, i + 1);
    }
  } else {
    if (!h) {
      result[i] = '-';
    } else {
      result[i] = '?';
    }
  }
}

void operation_1(std::vector<char> &result, int i, bool h) {

  if ((result[i] == '?' || result[i] == '-') && i > 0) {
    if (h == 1) {
      operation_1(result, i - 1, true);
    } else {
      operation_1(result, i - 1);
    }
  } else {
    if (!h) {
      result[i] = '-';
    } else {
      result[i] = '?';
    }
  }
}

void operation_2(std::vector<char> &result) {

  if (result.size() == 1) {
    result[0] = '-';
    return;
  }

  operation_0(result, 0, true);
  operation_1(result, result.size() - 1, true);

}

int main() {
  int t;
  std::cin >> t;

  std::vector<char> result;

  for (int i = 0; i < t; i++) {

    int n = 0, k = 0, count = 0;
    std::cin >> n >> k;
    result.clear();
    result.resize(n, '+');
    std::string temp;
    std::cin >> temp;

    for (int j = 0; j < k; j++) {

      if (temp[j] == '0') {
        operation_0(result, 0);
      } else if (temp[j] == '1') {
        operation_1(result, n - 1);
      } else if (temp[j] == '2' && j != temp.size() -1) {
        count++;
      } else if (temp[j] == '2') {
        operation_2(result);
      }
    }

    for(int j= 0; j < count; j++) {
      operation_2(result);
    }

    for (int j = 0; j < n; j++) {
      std::cout << result[j];
    }

    std::cout << std::endl;
  }

  return 0;
}
