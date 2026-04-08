#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        int p;
        cin >> p;
        p--; // convert to 0-indexed

        int x = arr[p]; // target value
        int ops = 0;

        // count wrong-groups on LEFT of p
        bool in_wrong_group = false;
        for (int i = 0; i < p; i++) {
            if (arr[i] != x && !in_wrong_group) {
                ops++;              // new group started
                in_wrong_group = true;
            } else if (arr[i] == x) {
                in_wrong_group = false;
            }
        }

        // count wrong-groups on RIGHT of p
        in_wrong_group = false;
        for (int i = p + 1; i < n; i++) {
            if (arr[i] != x && !in_wrong_group) {
                ops++;
                in_wrong_group = true;
            } else if (arr[i] == x) {
                in_wrong_group = false;
            }
        }

        cout << ops << "\n";
    }
}
