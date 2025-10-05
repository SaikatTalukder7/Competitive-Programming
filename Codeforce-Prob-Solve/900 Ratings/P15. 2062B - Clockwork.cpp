#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            int mxDist;
            if (i > n - i - 1)
                mxDist = i;
            else
                mxDist = n - i - 1;

            if (a[i] <= 2 * mxDist)
            {
                possible = false;
            }
        }
        if (possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
