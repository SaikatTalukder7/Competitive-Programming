#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long mx = 1;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i <= k)
            {
                mx = max(mx, i);
            }
            if (n / i <= k)
            {
                mx = max(mx, n / i);
            }
        }
    }
    cout << n / mx << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
