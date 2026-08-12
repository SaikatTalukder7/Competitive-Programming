#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, p;
        cin >> n >> k >> p;

        int need = abs(k);

        if (need > n * p)
            cout << -1 << endl;
        else
            cout << (need + p - 1) / p << endl;
    }

    return 0;
}
