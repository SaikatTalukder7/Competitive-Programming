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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
          {
            cin >> a[i];
          }
        long long ans = LLONG_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                ans = 0;
                break;
            }
            else
            {
                long long diff = a[i + 1] - a[i];
                long long ops = diff / 2 + 1;
                ans = min(ans, ops);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
