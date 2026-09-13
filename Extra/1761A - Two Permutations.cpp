#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        if (n == a && b == a)
        {
            cout << "Yes\n";
            continue;
        }

        if (a + b > n - 2)
        {
            cout << "No\n";
            continue;
        }

        cout << "Yes\n";
    }

    return 0;
}
