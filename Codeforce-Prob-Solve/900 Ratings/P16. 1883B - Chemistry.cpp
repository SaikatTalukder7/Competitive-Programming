#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;

        int f[26] = {0};
        for (int j = 0; j < n; j++)
        {
            f[st[j] - 'a']++;
        }

        int oCount = 0;
        for (int j = 0; j < 26; j++)
        {
            if (f[j] % 2 != 0)
            {
                oCount++;
            }
        }

        if (k >= oCount - 1)
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
