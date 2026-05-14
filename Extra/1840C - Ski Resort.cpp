#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long cnt = 0;
        long long len = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                len++;
            }
            else
            {
                if (len >= k)
                {
                    cnt += (len - k + 1) * (len - k + 2) / 2;
                }

                len = 0;
            }
        }
        if (len >= k)
        {
            cnt += (len - k + 1) * (len - k + 2) / 2;
        }
        cout << cnt << endl;
    }
    return 0;
}
