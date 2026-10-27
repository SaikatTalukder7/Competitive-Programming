#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string a, b;
        cin >> a >> b;

        int n = a.length();
        int m = b.length();
        int mx = 0;

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                int cnt = 0;

                while (j + cnt < n && k + cnt < m &&
                       a[j + cnt] == b[k + cnt])
                {
                    cnt++;
                }

                mx = max(mx, cnt);
            }
        }

        cout << n + m - 2 * mx << '\n';
    }

    return 0;
}
