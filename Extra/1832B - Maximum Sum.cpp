#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;

        long long a[200010];
        long long prefix[200010];

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        sort(a, a + n);

        prefix[0] = 0;

        for (int j = 0; j < n; j++)
        {
            prefix[j + 1] = prefix[j] + a[j];
        }

        long long ans = 0;

        for (int j = 0; j <= k; j++)
        {
            int left = 2 * j;
            int right = n - (k - j);

            long long sum = prefix[right] - prefix[left];

            ans = max(ans, sum);
        }

        cout << ans << '\n';
    }

    return 0;
}
