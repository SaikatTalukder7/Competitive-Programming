#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    map<int, vector<int>> pos;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pos[a[i]].push_back(i + 1);
    }
    for (int i = 0; i < q; i++)
    {
        int x, k;
        cin >> x >> k;
        if (pos.count(x) && pos[x].size() >= k)
        {
            cout << pos[x][k - 1] << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
