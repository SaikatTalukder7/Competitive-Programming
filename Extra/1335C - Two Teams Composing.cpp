#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        map<int, int> mp;
        int mx = 0;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;

            mp[x]++;
            mx = max(mx, mp[x]);
        }

        int d = mp.size();

        cout << max(min(d, mx - 1), min(d - 1, mx)) << '\n';
    }

    return 0;
}
