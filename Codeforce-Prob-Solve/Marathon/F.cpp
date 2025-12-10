#include <bits/stdc++.h>
using namespace std;

void saikat()
{
    int n, idx;
    cin >> n >> idx;

    queue<pair<int, int>> q;
    int cnt[10] = {0};

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push({x, i == idx});
        cnt[x]++;
    }
    int ans = 0;
    while (!q.empty())
    {
        int p = q.front().first;
        bool saikat = q.front().second;
        q.pop();

        int mx = 9;
        while (mx > 0 && cnt[mx] == 0)
        {
            mx--;
        }
        if (p == mx)
        {
            cnt[p]--;
            ans++;
            if (saikat)
            {
                cout << ans << endl;
                break;
            }
        }
        else
        {
            q.push({p, saikat});
        }
    }
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
