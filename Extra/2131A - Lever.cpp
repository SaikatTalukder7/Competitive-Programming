#include <bits/stdc++.h>
using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long n;
        cin >> n;

        vector<long> a(n);

        for (long i = 0; i < n; i++) {
            cin >> a[i];
        }

        long total = 1;

        for (long i = 0; i < n; i++) {
            long b;
            cin >> b;

            if (a[i] > b) {
                total += a[i] - b;
            }
        }

        cout << total << endl;
    }

    return 0;
}
