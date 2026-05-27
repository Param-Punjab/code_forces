#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

int main() {
  int test = 0, count = 0;
  std::cin >> test;

  // temprary storing string variable
  std::string temp;

  //creating vector of strings to store names
  std::unordered_map<std::string, int> names;

  // creating output vector of strings to store output
  std::vector<std::string> output;

  // getting input of names
  for (int i = 0; i < test; ++i) {
    std::cin >> temp;

    // checking how many times does temp exists in the name vector and if it exists then adding the 
    // count to the name and pushing it to the output vector
    if (names.count(temp)) {
      count = names[temp];
      names[temp]++;
    } else {
      names[temp] = 1;
    }

    // if count is greater than 0 then we have to add the count to the 
    // name and push it to the output vector otherwise we will just push "OK" to the output vector
    if (count > 0) {
      output.push_back(temp + std::to_string(count));
      count = 0;
    } else {
      output.push_back("OK");
    }
  }

  // printing the output output
  for (int i = 0; i < test; ++i) {
    std::cout << output[i] << std::endl;
  }

  return 0;
}