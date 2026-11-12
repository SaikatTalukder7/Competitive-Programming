
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        string s;
        cin >> n >> s;

        int difference[27] = {};

        for (int i = 0; i < n / 2; i++)
        {
            int u = s[i] - 'a';
            int v = s[n - i - 1] - 'a';

            if (u == v)
            {
                continue;
            }

            int low = min(u, v);
            int high = max(u, v);

            difference[low + 1]++;
            difference[high + 1]--;
        }

        int active = 0;
        int operations = 0;

        for (int i = 1; i < 26; i++)
        {
            active += difference[i];

            if (active > 0)
            {
                operations++;
            }
        }

        cout << operations << '\n';
    }

    return 0;
}
