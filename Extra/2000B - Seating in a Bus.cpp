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
        vector<int> occupied(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        occupied[a[0]] = 1;

        bool possible = true;

        for (int i = 1; i < n; i++)
        {
            int seat = a[i];

            bool left = false;
            bool right = false;

            if (seat > 1 && occupied[seat - 1])
            {
                left = true;
            }

            if (seat < n && occupied[seat + 1])
            {
                right = true;
            }

            if (!left && !right)
            {
                possible = false;
                break;
            }

            occupied[seat] = 1;
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
