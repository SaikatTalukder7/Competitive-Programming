#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d < b)
        {
            cout << -1 << endl;
            continue;
        }

        long long up = d - b;
        long long x = a + up;

        if (x < c)
        {
            cout << -1 << endl;
            continue;
        }

        cout << up + (x - c) << endl;
    }

    return 0;
}
