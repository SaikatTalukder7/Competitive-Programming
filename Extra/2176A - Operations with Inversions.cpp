#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    set<int> s;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) s.insert(j);
        }
    }

    cout << (int)s.size() << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
