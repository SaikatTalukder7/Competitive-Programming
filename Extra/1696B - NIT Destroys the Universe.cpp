#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int l = 0;
        int r = n - 1;

        while (l < n && a[l] == 0) {
            l++;
        }

        while (r >= 0 && a[r] == 0) {
            r--;
        }

        if (l == n) {
            cout << 0 << endl;
        }
        else {
            bool zero = false;

            for (int i = l; i <= r; i++) {
                if (a[i] == 0) {
                    zero = true;
                    break;
                }
            }

            if (zero) {
                cout << 2 << endl;
            }
            else {
                cout << 1 << endl;
            }
        }
    }

    return 0;
}
