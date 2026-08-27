#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll m, a, b, c;
    cin >> m >> a >> b >> c;

    ll ans = 0;

    ll row1 = min(m, a);
    ans += row1;

    ll row2 = min(m, b);
    ans += row2;

    ll empty = (m - row1) + (m - row2);

    ans += min(empty, c);

    cout << ans << '\n';
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
