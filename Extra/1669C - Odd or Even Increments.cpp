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
            cin >> a[i];

        bool ok = true;

        // Check odd-indexed positions
        for (int i = 2; i < n; i += 2)
        {
            if (a[i] % 2 != a[0] % 2)
                ok = false;
        }

        // Check even-indexed positions
        for (int i = 3; i < n; i += 2)
        {
            if (a[i] % 2 != a[1] % 2)
                ok = false;
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
