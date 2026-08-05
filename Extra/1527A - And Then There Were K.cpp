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

        int p = 1;

        while (p <= n)
        {
            p *= 2;
        }

        cout << p / 2 - 1 << endl;
    }

    return 0;
}
