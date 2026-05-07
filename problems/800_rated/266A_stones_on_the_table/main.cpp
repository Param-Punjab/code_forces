#include <iostream>

int main() {
    int n = 0, count = 0, size = 0;

    std::string my_string;

    std::cin >> n >> my_string;

    size = my_string.size();

    for (int i = 0; i < my_string.size()-1; i++) {
        if (my_string[i] == my_string[i+1]) {
            count++;
        }
    }

    std::cout << count;

    return 0;
}