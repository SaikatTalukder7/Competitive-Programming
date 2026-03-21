#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int operations = 0;
        for (int i = 0; i <= 10; i++) {
            if (x.find(s) != string::npos) {
                cout << operations << "\n";
                break;
            }
            if (x.size() > 100) {
                cout << -1 << "\n";
                break;
            }
            x += x;
            operations++;
            if (i == 10) {
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}
