#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a % 2 == 0)
            even++;
        else
            odd++;
    }

    bool possible = false;

    for (int i = 1; i <= odd; i += 2)
    {
        if (x - i >= 0 && x - i <= even)
        {
            possible = true;
            break;
        }
    }

    if (possible)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
