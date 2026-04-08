#include <iostream>

int main() {
    int n;
    std::cin >> n;

    bool arr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        if(arr[i] == 1) { 
            std::cout << "HARD";
            return 0;
        }
    }

    std::cout << "EASY";
    return 0;
}