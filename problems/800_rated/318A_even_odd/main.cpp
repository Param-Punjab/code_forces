#include <iostream>
using namespace std;

int main() {
    long long n = 0, k = 0; 
    long long n_E = 0, n_O = 0; 

    cin >> n >> k;

    n_E = n/2;
    n_O = (n+1)/2;

    if (k > n_O) {
        cout << 2*(k-n_O);
    } else {
        cout << (2*k) -1;
    }

    return 0;
}