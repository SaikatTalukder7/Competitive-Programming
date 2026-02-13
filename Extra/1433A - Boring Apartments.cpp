#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x;
    cin >> x;
    
    int digit = x[0] - '0';
    int len = x.length();
    
    int total = (digit - 1) * 10;
    
    for (int i = 1; i <= len; i++) {
        total += i;
    }
    
    cout << total << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
