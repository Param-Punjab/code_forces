#include <iostream>

int main() {
    long long t = 0, j = 1, k = 0;
    std::cin >> t;
    long long arr[t][3];

    for (int i = 0; i < t; i++) {
        std::cin >> arr[i][0] >> arr[i][1];
        arr[i][2] = 0;

        while(k < arr[i][1]) {
            j++;
            k = j * arr[i][0];
            if (arr[i][1] % k == 0) {
                continue;
            } else {
                std::cout << "YES\n";
                arr[i][2] = 1;
                k = 0; j = 1;
                break;
            }
        } 
        if (arr[i][2] != 1) {
            std::cout << "NO\n";
            k = 0; j = 1;
        }
    }

    return 0;
}