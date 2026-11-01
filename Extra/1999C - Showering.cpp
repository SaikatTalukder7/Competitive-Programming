#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, s, m;
        cin >> n >> s >> m;

        int last = 0;
        bool found = false;

        for (int j = 0; j < n; j++)
        {
            int l, r;
            cin >> l >> r;

            if (l - last >= s)
            {
                found = true;
            }

            last = r;
        }

        if (m - last >= s)
        {
            found = true;
        }

        if (found)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
