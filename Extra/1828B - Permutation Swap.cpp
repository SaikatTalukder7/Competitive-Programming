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

        vector<int> p(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> p[i];

        int ans = 0;

        for (int i = 1; i <= n; i++)
        {
            ans = gcd(ans, abs(i - p[i]));
        }

        cout << ans << '\n';
    }

    return 0;
}
