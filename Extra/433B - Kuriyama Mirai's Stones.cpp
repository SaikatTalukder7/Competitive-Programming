#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a[100010];
    long long pref1[100010] = {};
    long long pref2[100010] = {};

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref1[i] = pref1[i - 1] + a[i];
    }

    sort(a + 1, a + n + 1);

    for (int i = 1; i <= n; i++)
    {
        pref2[i] = pref2[i - 1] + a[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
        {
            cout << pref1[r] - pref1[l - 1] << '\n';
        }
        else
        {
            cout << pref2[r] - pref2[l - 1] << '\n';
        }
    }

    return 0;
}
