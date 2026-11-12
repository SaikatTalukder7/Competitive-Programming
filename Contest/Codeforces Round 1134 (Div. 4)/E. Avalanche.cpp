
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> stones(n);

        for (int i = 0; i < n; i++)
        {
            cin >> stones[i];
        }

        int winner = 0;

        for (int i = 0; i < n; i++)
        {
            if (stones[i] % 2 == 1)
            {
                winner ^= 1;
            }

            if (i >= k && stones[i] % 2 == 1)
            {
                winner ^= 1;
            }
        }

        cout << (winner ? "Alice" : "Bob") << '\n';
    }

    return 0;
}
