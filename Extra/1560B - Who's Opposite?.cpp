#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int n = 2 * abs(a - b);

        if (a > n || b > n || c > n)
        {
            cout << -1 << '\n';
        }
        else
        {
            int ans = c + n / 2;

            if (ans > n)
            {
                ans -= n;
            }

            cout << ans << '\n';
        }
    }

    return 0;
}
