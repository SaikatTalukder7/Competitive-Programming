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

        int a[200010], b[200010];

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }

        map<int, int> cntA, cntB;

        for (int j = 0; j < n; j++)
        {
            int cnt = 1;

            while (j + 1 < n && a[j] == a[j + 1])
            {
                cnt++;
                j++;
            }

            cntA[a[j]] = max(cntA[a[j]], cnt);
        }

        for (int j = 0; j < n; j++)
        {
            int cnt = 1;

            while (j + 1 < n && b[j] == b[j + 1])
            {
                cnt++;
                j++;
            }

            cntB[b[j]] = max(cntB[b[j]], cnt);
        }

        int ans = 0;

        for (auto x : cntA)
        {
            ans = max(ans, x.second + cntB[x.first]);
        }

        for (auto x : cntB)
        {
            ans = max(ans, x.second + cntA[x.first]);
        }

        cout << ans << '\n';
    }

    return 0;
}
