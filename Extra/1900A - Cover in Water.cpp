#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int dots = 0;
        bool triple = false;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.') dots++;
            if (i + 2 < n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.')
                triple = true;
        }

        if (dots == 0) cout << 0 << endl;
        else if (triple) cout << 2 << endl;
        else cout << dots << endl;
    }
    return 0;
}
