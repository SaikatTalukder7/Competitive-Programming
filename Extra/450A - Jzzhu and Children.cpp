#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int mx = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        int turn;
        if (x % m == 0)
        {
            turn = x / m;
        }
        else
        {
            turn = (x / m) + 1;
        }
        if (turn >= mx)
        {
            mx = turn;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}
