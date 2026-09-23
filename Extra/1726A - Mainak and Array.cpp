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

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long maxl = 0;
        long long minb = LLONG_MAX;

        long long diff = a[n - 1] - a[0];

        for (int i = 0; i < n; i++)
        {
            if (i != 0)
            {
                maxl = max(maxl, a[i]);
            }

            if (i != n - 1)
            {
                minb = min(minb, a[i]);
                diff = max(diff, a[i] - a[i + 1]);
            }
        }

        diff = max({
            diff,
            maxl - a[0],
            a[n - 1] - minb
        });

        cout << diff << '\n';
    }

    return 0;
}
