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

        int a[100010];
        int ans[100010];

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        bool found = false;

        for (int j = 0; j < n; )
        {
            int k = j;

            while (k + 1 < n && a[k] == a[k + 1])
            {
                k++;
            }

            if (j == k)
            {
                found = true;
                break;
            }

            for (int l = j; l < k; l++)
            {
                ans[l] = l + 2;
            }

            ans[k] = j + 1;

            j = k + 1;
        }

        if (found)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans[j] << " ";
            }

            cout << '\n';
        }
    }

    return 0;
}
