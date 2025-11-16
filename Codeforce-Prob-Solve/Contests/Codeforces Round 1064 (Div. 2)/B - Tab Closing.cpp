#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, n;
        cin >> x >> y >> n;
        long long m = x / y;
        if (n <= m)
        {
            cout << 1 << endl;
        }
        else
        {
            if ((x % y == 0) && (m == 1))
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }
    return 0;
}
