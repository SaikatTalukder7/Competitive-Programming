#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> fre(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= n)
            {
                fre[a[i]]++;
            }
        }
        bool awins = false;
        for (int x = 1; x <= n; x++)
        {
            if (fre[x] % 2 == 1)
            {
                awins = true;
                break;
            }
        }
        if (awins)
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
