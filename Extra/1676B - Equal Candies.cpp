#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        long long sum = 0;
        long long mn = LLONG_MAX;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            mn = min(mn, a[i]);
        }

        cout << sum - n * mn << endl;
    }

    return 0;
}
