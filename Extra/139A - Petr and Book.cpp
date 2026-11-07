#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[7];

    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }

    while (true)
    {
        for (int i = 0; i < 7; i++)
        {
            n -= a[i];

            if (n <= 0)
            {
                cout << i + 1 << '\n';
                return 0;
            }
        }
    }

    return 0;
}
