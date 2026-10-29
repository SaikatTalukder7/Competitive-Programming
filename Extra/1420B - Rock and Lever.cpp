#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        long long a[100010];

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        long long cnt[32] = {};
        long long ans = 0;

        for (int j = 0; j < n; j++)
        {
            int bit = 0;
            long long x = a[j];

            while (x > 1)
            {
                x /= 2;
                bit++;
            }

            ans += cnt[bit];
            cnt[bit]++;
        }

        cout << ans << '\n';
    }

    return 0;
}
