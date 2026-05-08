#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 10;

        if (k == 2)
        {
            for (int i = 0; i < n; i++)
            {
                ans = min(ans, (2 - a[i] % 2) % 2);
            }
        }
        else if (k == 3)
        {
            for (int i = 0; i < n; i++)
            {
                ans = min(ans, (3 - a[i] % 3) % 3);
            }
        }
        else if (k == 4)
        {
            int even = 0;

            for (int i = 0; i < n; i++)
            {
                ans = min(ans, (4 - a[i] % 4) % 4);

                if (a[i] % 2 == 0)
                {
                    even++;
                }
            }

            if (even >= 2)
            {
                ans = 0;
            }
            else if (even == 1)
            {
                ans = min(ans, 1);
            }
            else
            {
                ans = min(ans, 2);
            }
        }
        else if (k == 5)
        {
            for (int i = 0; i < n; i++)
            {
                ans = min(ans, (5 - a[i] % 5) % 5);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
