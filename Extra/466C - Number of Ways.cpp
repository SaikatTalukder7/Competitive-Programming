#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a[500010];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % 3 != 0)
    {
        cout << 0 << '\n';
        return 0;
    }

    long long x = sum / 3;
    long long first = 0;
    long long ans = 0;
    long long prefix = 0;

    for (int i = 0; i < n - 1; i++)
    {
        prefix += a[i];

        if (prefix == 2 * x)
        {
            ans += first;
        }

        if (prefix == x)
        {
            first++;
        }
    }

    cout << ans << '\n';

    return 0;
}
