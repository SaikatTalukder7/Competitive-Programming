#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> ans(n + 2);
    set<int> s;
    for (int i = n; i >= 1; i--)
    {
        s.insert(a[i]);
        ans[i] = s.size();
    }
    while (m--)
    {
        int l;
        cin >> l;
        cout << ans[l] << endl;
    }
    return 0;
}
