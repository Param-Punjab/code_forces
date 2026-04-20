#include <iostream>
#include <cmath>

int main() {
    int n, temp = 0;

    std::cin >> n;

    int arr[n][2];
    int final[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i][0] >> arr[i][1];
        temp = ((arr[i][0] + arr[i][1])/arr[i][1])*arr[i][1];
        final[i] = temp - arr[i][0];
    }

    for (int i = 0; i < n; i++) {
        std::cout << final[i] << std::endl;
    }

    return 0;
}