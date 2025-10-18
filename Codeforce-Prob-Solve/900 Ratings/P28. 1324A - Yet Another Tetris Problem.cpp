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
        {
            cin >> a[i];
        }

        bool possible = true;
        int parity = a[0] % 2;

        for (int i = 1; i < n; i++)
        {
            if (a[i] % 2 != parity)
            {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << '\n';
    }
    return 0;
}