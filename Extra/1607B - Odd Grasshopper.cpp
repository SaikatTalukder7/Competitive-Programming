#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, n;
        cin >> x >> n;

        long long ans = x;

        if (x % 2 == 0)
        {
            if (n % 4 == 0)
                ans += 0;
            else if (n % 4 == 1)
                ans -= n;
            else if (n % 4 == 2)
                ans += 1;
            else
                ans += n + 1;
        }
        else
        {
            if (n % 4 == 0)
                ans += 0;
            else if (n % 4 == 1)
                ans += n;
            else if (n % 4 == 2)
                ans -= 1;
            else
                ans -= n + 1;
        }

        cout << ans << endl;
    }

    return 0;
}
