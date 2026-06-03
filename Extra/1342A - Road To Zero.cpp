#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        long long a, b;
        cin >> a >> b;
        long long ans;
        if (2 * a <= b)
        {
            ans = (x + y) * a;
        }
        else
        {
            long long mn = min(x, y);
            long long diff = abs(x - y);
            ans = mn * b + diff * a;
        }
        cout << ans << "\n";
    }
    return 0;
}
