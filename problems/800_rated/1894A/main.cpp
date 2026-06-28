#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::string s;
        std::cin >> n >> s;          
        std::cout << s.back() << std::endl; 
    }
    return 0;
}