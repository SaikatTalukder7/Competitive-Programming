#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int,int>> dragons;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        dragons.push_back({x, y});
    }
    sort(dragons.begin(), dragons.end()); 
    for (int i = 0; i < n; i++)
    {
        int x = dragons[i].first;
        int y = dragons[i].second;

        if (s <= x)
        {
            cout << "NO" << endl;
            return 0;
        }

        s += y;
    }
    cout << "YES" << endl;
    return 0;
}
