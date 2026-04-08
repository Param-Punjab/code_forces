#include <iostream>

int main() {
    int f, h, w = 0;
    std::cin >> f >> h;
    int a[f];

    for (int i = 0; i < f; i++) {
        std::cin >> a[i];
        if (a[i] > h) {w += 2;}
        else {w++;}
    }

    std::cout << w;
}