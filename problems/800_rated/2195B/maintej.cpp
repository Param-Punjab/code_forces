#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Do the input
  int t, n, x, sum;
  vector<int> nums;
  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> n;
    sum = 0;
    for (int j = 0; j < n; j++) {
      cin >> x;
      nums.push_back(x);
    }
    for (int j = 0; j <= n / 2; j++) {
      if (nums[j] > nums[2 * j]) {
        int temp = nums[j];
        nums[j] = nums[2 * j];
        nums[2 * j] = temp;
      }
      sum += nums[j];
    }
    if (sum == nums[nums.size() - 1] * (nums[nums.size() - 1] - 1) / 2.0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

} // Main close
