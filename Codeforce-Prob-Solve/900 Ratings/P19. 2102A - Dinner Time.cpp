#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, p, q;
        cin >> m >> n >> p >> q;
        if (m * q == n * p)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
