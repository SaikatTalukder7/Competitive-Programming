#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        char a[8][8];

        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
            {
                cin >> a[j][k];
            }
        }

        for (int j = 1; j < 7; j++)
        {
            for (int k = 1; k < 7; k++)
            {
                if (a[j][k] == '#' &&
                    a[j - 1][k - 1] == '#' &&
                    a[j - 1][k + 1] == '#' &&
                    a[j + 1][k - 1] == '#' &&
                    a[j + 1][k + 1] == '#')
                {
                    cout << j + 1 << " " << k + 1 << '\n';
                }
            }
        }
    }

    return 0;
}
