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

        vector<int> a(n);

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int m = 1;

        for (int j = 1; j < n; j++)
        {
            if (a[j] != a[j - 1])
            {
                a[m] = a[j];
                m++;
            }
        }

        int ans = 0;

        for (int j = 0; j < m; j++)
        {
            if (j == 0 || j == m - 1)
            {
                ans++;
            }
            else if ((a[j] > a[j - 1] && a[j] > a[j + 1]) ||
                     (a[j] < a[j - 1] && a[j] < a[j + 1]))
            {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
