#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int ans = 0;

        for (int x = 0; x <= 5; x++) {
            for (int y = 0; y <= 5 - x; y++) {
                int z = 5 - x - y;

                int A = a + x;
                int B = b + y;
                int C = c + z;

                ans = max(ans, A * B * C);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
