
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            if (i % (k + 1) == 0)
            {
                ans ^= (x % 2);
            }
        }

        if (ans == 1)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}
