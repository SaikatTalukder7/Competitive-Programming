#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<long long, long long> freq;
        long long ans = 0;

        for (int i = 1; i <= n; i++) {
            long long a;
            cin >> a;
            long long key = a - i;
            freq[key]++;
        }

        for (auto &p : freq) {
            long long k = p.second;
            ans += k * (k - 1) / 2;
        }

        cout << ans << endl;
    }

    return 0;
}
