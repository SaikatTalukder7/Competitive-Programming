#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s; cin >> s;
    int n = s.size();

    vector<int> pref(n, 0);

    for (int i = 1; i < n; i++) {
        pref[i] = pref[i-1];
        if (s[i] == s[i-1]) pref[i]++;
    }

    int m; cin >> m;
    while (m--) {
        int l, r; cin >> l >> r;

        // convert to 0-based
        l--; r--;

        cout << pref[r] - pref[l] << "\n";
    }
}
