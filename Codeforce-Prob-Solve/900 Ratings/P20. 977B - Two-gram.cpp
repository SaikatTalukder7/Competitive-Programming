#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string t = s.substr(i, 2);
        mp[t]++;
    }
    string ans = "";
    int maxCount = 0;
    for (int i = 0; i < n - 1; i++)
    {
        string t = s.substr(i, 2);
        if (mp[t] > maxCount)
        {
            maxCount = mp[t];
            ans = t;
        }
    }
    cout << ans << "\n";
}
