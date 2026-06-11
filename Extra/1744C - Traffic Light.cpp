#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    char c;
    string s;
    cin >> n >> c;
    cin >> s;
    if (c == 'g')
    {
        cout << 0 << "\n";
        return;
    }
    s += s;
    int nextGreen = -1;
    int ans = 0;
    for (int i = 2 * n - 1; i >= 0; i--)
    {
        if (s[i] == 'g')
        {
            nextGreen = i;
        }
        if (s[i] == c)
        {
            ans = max(ans, nextGreen - i);
        }
    }
    cout << ans << "\n";
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
