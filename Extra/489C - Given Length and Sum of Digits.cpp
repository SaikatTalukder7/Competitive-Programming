#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, s;
    cin >> m >> s;

    if((s == 0 && m > 1) || s > 9 * m)
    {
        cout << "-1 -1" << endl;
        return 0;
    }
    int sum = s;
    string mx = "";
    for(int i = 0; i < m; i++)
    {
        int d = min(9, sum);
        mx += char('0' + d);
        sum -= d;
    }
    sum = s;
    string mn(m, '0');
    for(int i = m - 1; i >= 0; i--)
    {
        int d = max(0, sum - 9 * i);

        if(i == m - 1 && d == 0 && sum > 0)
        {
            d = 1;
        }

        mn[m - 1 - i] = char('0' + d);
        sum -= d;
    }
    cout << mn << " " << mx << endl;
    return 0;
}
