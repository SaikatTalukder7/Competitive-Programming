#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        if (x % 2 == 1)
        {
            cout << "YES\n";
        }
        else
        {
            if ((x & (x - 1)) == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
    return 0;
}
