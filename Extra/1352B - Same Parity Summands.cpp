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
        // all odd
        if (n >= k && (n - k) % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 1; i < k; i++)
            {
                cout << 1 << " ";
            }
            cout << n - (k - 1) << endl;
        }
        // all even
        else if (n >= 2 * k && (n - 2 * k) % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 1; i < k; i++)
            {
                cout << 2 << " ";
            }
            cout << n - 2 * (k - 1) << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
