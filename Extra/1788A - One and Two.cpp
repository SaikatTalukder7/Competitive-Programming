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

        vector<int> a(n);
        int total2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                total2++;
            }
        }

        int cnt2 = 0;
        int ans = -1;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == 2)
            {
                cnt2++;
            }

            if (cnt2 * 2 == total2)
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
