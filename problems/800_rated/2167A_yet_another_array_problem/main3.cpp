#include <iostream>
#include <vector>
#include <numeric> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    long long primes[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long g = a[0];
        for (int i = 1; i < n; i++) {
            g = gcd(g, a[i]);
        }
        
        long long ans = -1;
        for (long long p : primes) {
            if (g % p != 0) {
                ans = p;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}