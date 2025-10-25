#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);
        long long totalSum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            totalSum += a[i];
        }
        for (int query = 0; query < q; query++)
        {
            int l, r;
            long long k;
            cin >> l >> r >> k;
            long long rangeSum = 0;
            for (int i = l - 1; i < r; i++)
            {
                rangeSum += a[i];
            }
            long long newSum = totalSum - rangeSum + (long long)(r - l + 1) * k;
            if (newSum % 2 == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
