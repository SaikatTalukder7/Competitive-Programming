#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, p;
        cin >> n >> p;

        vector<pair<int,int>> residents(n);
        for (int i = 0; i < n; i++) {
            cin >> residents[i].second; // m
        }
        for (int i = 0; i < n; i++) {
            cin >> residents[i].first; // c
        }

        sort(residents.begin(), residents.end());

        vector<long long> costs(n, p);
        int r = 1;
        for (int l = 0; l <= r && r < n; l++) {
            int c = residents[l].first;
            int m = residents[l].second;
            if (c > p) break;
            while (r < n && m > 0) {
                costs[r++] = c;
                m--;
            }
        }

        long long total = accumulate(costs.begin(), costs.end(), 0LL);
        cout << total << "\n";
    }

    return 0;
}
