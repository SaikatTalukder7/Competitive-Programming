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

        long long a[200010];

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        long long ans = 0;
        int j = 0;

        while (j < n)
        {
            long long mx = a[j];

            while (j + 1 < n && (a[j] > 0) == (a[j + 1] > 0))
            {
                mx = max(mx, a[j + 1]);
                j++;
            }

            ans += mx;
            j++;
        }

        cout << ans << '\n';
    }

    return 0;
}
