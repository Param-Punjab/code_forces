#include <iostream>

int main() {
    int n, a = 0, d = 0;

    std::cin >> n;
    std::string game;
    std::cin >> game;

    for (int i = 0; i < game.size(); i++) {
        if (game[i] == 'A') {a++;}
        else {d++;}
    }

    if (a > d) {std::cout << "Anton";}
    else if (a < d) {std::cout << "Danik";}
    else {std::cout << "Friendship";}
}