#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> diff(n + 1, 0);

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        diff[l]++;
        diff[r + 1]--;
    }

    vector<long long> cnt(n);

    long long current = 0;

    for (int i = 0; i < n; i++)
    {
        current += diff[i];
        cnt[i] = current;
    }

    sort(a.begin(), a.end());
    sort(cnt.begin(), cnt.end());

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += a[i] * cnt[i];
    }

    cout << ans << '\n';

    return 0;
}
