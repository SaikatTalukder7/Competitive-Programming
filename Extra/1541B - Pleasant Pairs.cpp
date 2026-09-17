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

        vector<int> a(n + 1);
        vector<int> pos(2 * n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pos[a[i]] = i;
        }

        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int x = 1; x * a[i] <= 2 * n; x++)
            {
                if (pos[x] == 0)
                    continue;

                int j = pos[x];

                if (i < j && a[i] * x == i + j)
                    ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
