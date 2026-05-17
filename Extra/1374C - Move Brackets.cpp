#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int bal = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            bal++;
        }
        else
        {
            bal--;
        }
        if (bal < 0)
        {
            ans++;
            bal = 0;
        }
    }
    cout << ans << endl;
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
