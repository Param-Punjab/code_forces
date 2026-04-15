#include <iostream>

int main() {
    int t;

    std::cin >> t;

    int arr[3];

    int final[t];

    for (int i = 0; i < t; i++) {

        std::cin >> arr[0] >> arr[1] >> arr[2];

        if (arr[0] + arr[1] == arr[2]) {
            final[i] = 1;
        } else if (arr[0] + arr[2] == arr[1]) {
            final[i] = 1;
        } else if (arr[1] + arr[2] == arr[0]) {
            final[i] = 1;
        } else { final[i] = 0;}
    }

    for (int i = 0; i < t; i++) {
        if (final[i] == 1) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;;
        }
    }

    return 0;
}