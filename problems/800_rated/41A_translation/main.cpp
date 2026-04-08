#include <iostream>

int main() {
    std::string word;
    std::string translated_word;
    std::string something;

    std::cin >> word >> translated_word;


    for (int i = word.size()-1; i >= 0; i--) {
        something.push_back(word[i]);
    }

    if (translated_word == something) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
}