#include <bits/stdc++.h>
using namespace std;

void saikat()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int ans = 0;
    for (char c = 'A'; c <= 'G'; c++)
    {
        if (mp[c] < m)
        {
            ans += (m - mp[c]);
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
        saikat();
    }
    return 0;
}
