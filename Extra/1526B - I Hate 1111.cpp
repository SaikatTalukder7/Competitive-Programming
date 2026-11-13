
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        bool possible = false;

        for (int i = 0; i <= 10; i++)
        {
            int remaining = x - 111 * i;

            if (remaining >= 0 && remaining % 11 == 0)
            {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}
