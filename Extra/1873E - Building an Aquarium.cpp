#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long x;

        cin >> n >> x;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long low = 1;
        long long high = 2000000000LL;
        long long ans = 1;

        while (low <= high)
        {
            long long h = (low + high) / 2;

            long long water = 0;

            for (int i = 0; i < n; i++)
            {
                if (a[i] < h)
                    water += h - a[i];

                if (water > x)
                    break;
            }

            if (water <= x)
            {
                ans = h;
                low = h + 1;
            }
            else
            {
                high = h - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
