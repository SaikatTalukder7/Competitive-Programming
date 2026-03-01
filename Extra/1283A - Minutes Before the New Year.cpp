#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int h, m;
        cin >> h >> m;

        int minutes_passed = h * 60 + m;
        cout << 1440 - minutes_passed << endl;
    }

    return 0;
}
