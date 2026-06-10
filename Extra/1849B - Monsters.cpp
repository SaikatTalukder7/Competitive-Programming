#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        vector<pair<long long, int>> v;
        for (int i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            long long r = x % k;
            if (r == 0)
            {
                r = k;
            }
            v.push_back({r, i});
        }
        sort(v.begin(), v.end(),
             [](pair<long long, int> a, pair<long long, int> b)
             {
                 if (a.first == b.first)
                 {
                     return a.second < b.second;
                 }
                 return a.first > b.first;
             });
        for (int i = 0; i < n; i++)
        {
            cout << v[i].second << " ";
        }
        cout << "\n";
    }
    return 0;
}
