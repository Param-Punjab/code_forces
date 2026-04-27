#include <iostream>

long long int calculate(long long int n) {
    long long int answer = 0;

    // 100 check
    answer += n / 100;
    n = n % 100;

    // 20 check
    answer += n / 20;
    n = n % 20;

    // 10 check
    answer += n / 10;
    n = n % 10;

    // 5 check 
    answer += n / 5;
    n = n % 5;

    // 1 check 
    answer += n;
    n = 0;

    return answer;
}

int main() {
    long long int n = 0;

    std::cin >> n;

    std::cout << calculate(n);
    return 0;
}