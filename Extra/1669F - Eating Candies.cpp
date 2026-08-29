#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void Saikat()
{
    int n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1;

    ll leftSum = 0;
    ll rightSum = 0;

    int ans = 0;

    while (l <= r)
    {
        if (leftSum <= rightSum)
        {
            leftSum += a[l];
            l++;
        }
        else
        {
            rightSum += a[r];
            r--;
        }

        if (leftSum == rightSum)
        {
            ans = l + (n - 1 - r);
        }
    }

    cout << ans << nline;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Saikat();
    }

    return 0;
}
