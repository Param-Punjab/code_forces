#include <iostream>

int main() {
    int n;

    std::cin >> n;

    if(n <= 5) {std::cout << 1 << std::endl;}
    else {
        if (n % 5 == 0) {
            std::cout << n / 5 << std::endl;
        } else {
            std::cout << (n/5) + 1 << std::endl;
        }
    }
    return 0;
}