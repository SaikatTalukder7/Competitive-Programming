#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int ans = 3 * (n / (a + b + c));

        n %= (a + b + c);

        if (n > 0) {
            ans++;
            n -= a;
        }

        if (n > 0) {
            ans++;
            n -= b;
        }

        if (n > 0) {
            ans++;
            n -= c;
        }

        cout << ans << '\n';
    }

    return 0;
}
