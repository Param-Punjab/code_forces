#include <iostream>

int main() {
    int n = 0; 

    std::cin >> n;

    for (int i = 1; i <= n ; i++) {

        if (i != n) {
            if (i % 2 == 0) {
                std::cout << "I love that ";
            } else {
                std::cout << "I hate that ";
            }
        } else {

            if (i % 2 == 0) {
                std::cout << "I love it ";
            } else {
                std::cout << "I hate it ";
            }
        }
    }

    return 0;
}