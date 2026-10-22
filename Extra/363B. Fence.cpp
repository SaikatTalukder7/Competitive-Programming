#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[150010];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;

    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }

    int mn = sum;
    int ans = 1;

    for (int i = k; i < n; i++)
    {
        sum = sum - a[i - k] + a[i];

        if (sum < mn)
        {
            mn = sum;
            ans = i - k + 2;
        }
    }

    cout << ans << '\n';

    return 0;
}
