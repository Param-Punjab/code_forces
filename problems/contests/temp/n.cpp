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

        int x = arr[p];
        int left_groups = 0, right_groups = 0;
        bool in_group = false;

        // count wrong-groups on LEFT of p
        for (int i = 0; i < p; i++) {
            if (arr[i] != x && !in_group) { left_groups++; in_group = true; }
            else if (arr[i] == x) in_group = false;
        }

        // count wrong-groups on RIGHT of p
        in_group = false;
        for (int i = p + 1; i < n; i++) {
            if (arr[i] != x && !in_group) { right_groups++; in_group = true; }
            else if (arr[i] == x) in_group = false;
        }

        cout << 2 * max(left_groups, right_groups) << "\n";
    }
}
