#include <iostream>
#include <set>

int main() {
    int a = 0;
    std::string arr, final;

    final = "abcdefghijklmnopqrstuvwxyz";

    std::cin >> a;
    std::cin >> arr;

    std::set<char> s1;

    for (int i = 0; i < arr.size(); i++) {
        if ((int)arr[i] <= 90 && (int)arr[i] >= 65) arr[i] = (char)((int)arr[i] + 32);
        s1.insert(arr[i]);
    }


    if (s1.size() == final.size()) std::cout << "YES";
    else std::cout << "NO";
    return 0;
}