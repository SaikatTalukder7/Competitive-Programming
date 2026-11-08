#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        bool found = false;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;

            if (x == 67)
            {
                found = true;
            }
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
