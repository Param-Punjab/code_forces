#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n, temp = 0;

    std::cin >> n;

    std::vector<std::vector<long long int>> arr(n, std::vector<long long int>(2, 0));
    std::vector<long long int> final(n, 0);

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i][0] >> arr[i][1];
        temp = ((arr[i][0] + arr[i][1])/arr[i][1])*arr[i][1];
        final[i] = temp - arr[i][0];
        temp = 0;
    }

    for (int i = 0; i < n; i++) {
        std::cout << final[i] << std::endl;
    }

    return 0;
}