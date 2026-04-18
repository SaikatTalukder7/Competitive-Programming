#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;

        long long total = a + b + c + n;

        if (total % 3 != 0)
        {
            cout << "NO\n";
            continue;
        }

        long long x = total / 3;

        if (x >= max({a, b, c}))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
