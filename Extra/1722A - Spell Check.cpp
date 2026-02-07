#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
{
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (n != 5) 
        {
            cout << "NO\n";
            continue;
        }

        sort(s.begin(), s.end());

        string name = "Timur";
        sort(name.begin(), name.end());

        if (s == name) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
