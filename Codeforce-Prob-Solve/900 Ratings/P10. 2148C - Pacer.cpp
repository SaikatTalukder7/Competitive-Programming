#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        int n;
        long long m;
        cin >> n >> m;
        long long prevT = 0;
        int prevS = 0;
        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            long long g = a - prevT;
            int d = abs(b - prevS);
            long long x;
            if (g % 2 == d)
            {
                x = g;
            }
            else
            {
                x = g - 1;
            }
            count += x;
            prevT = a;
            prevS = b;
        }
        long long fg = m - prevT;
        if (fg > 0)
        {
            count += fg;
        }
        cout << count << "\n";
    }
    return 0;
}
