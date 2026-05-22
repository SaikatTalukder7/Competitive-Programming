#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        int mnx = 100000;
        int mxx = -100000;
        for (int i = 0; i < 4; i++)
        {
            cin >> x >> y;
            mnx = min(mnx, x);
            mxx = max(mxx, x);
        }
        int side = mxx - mnx;
        cout << side * side << endl;
    }
    return 0;
}
