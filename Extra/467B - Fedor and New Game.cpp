#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m + 1);

    for(int i = 0; i <= m; i++)
    {
        cin >> a[i];
    }

    int ans = 0;

    for(int i = 0; i < m; i++)
    {
        int x = a[i] ^ a[m];

        if(__builtin_popcount(x) <= k)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
