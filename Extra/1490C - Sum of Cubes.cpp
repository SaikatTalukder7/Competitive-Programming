#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;

        bool found = false;

        for (long long x = 1; x * x * x < n; x++)
        {
            long long rem = n - x * x * x;
            long long y = round(cbrt(rem));

            if (y * y * y == rem)
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
