
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

        int a[200010];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = a[0];
        int ans = a[0];

        for (int i = 1; i < n; i++)
        {
            if (abs(a[i] % 2) != abs(a[i - 1] % 2))
            {
                sum = max(a[i], sum + a[i]);
            }
            else
            {
                sum = a[i];
            }

            ans = max(ans, sum);
        }

        cout << ans << endl;
    }

    return 0;
}
