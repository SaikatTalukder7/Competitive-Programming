#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n % 2 != 0 || n < 4)
        {
            cout << -1 << endl;
            continue;
        }

        long long mn, mx;

        mx = n / 4;

        if (n % 6 == 0)
        {
            mn = n / 6;
        }
        else
        {
            mn = n / 6 + 1;
        }

        if (mn > mx)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << mn << " " << mx << endl;
        }
    }

    return 0;
}
