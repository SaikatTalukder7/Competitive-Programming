#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == i + 1)
            {
                cnt++;
            }
        }

        if (cnt % 2 == 0)
        {
            cout << cnt / 2 << endl;
        }
        else
        {
            cout << (cnt / 2) + 1 << endl;
        }
    }

    return 0;
}
