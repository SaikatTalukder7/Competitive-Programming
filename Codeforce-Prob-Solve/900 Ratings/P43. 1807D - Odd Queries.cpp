#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1), pre(n + 1);
        for (int i = 1; i <= n; i++) 
        {
            cin >> a[i];
            pre[i] = pre[i - 1] + a[i];
        }
        long long total = pre[n];
        while (q--) 
        {
            int l, r;
            long long k;
            cin >> l >> r >> k;
            long long old_sum = pre[r] - pre[l - 1]; 
            long long len = r - l + 1;
            long long new_sum = total - old_sum + (k * len);
            if (new_sum % 2 == 1)
            {
              cout << "YES" <<endl;
            }
            else
            {
              cout << "NO" <<endl;
            }
        }
    }
    return 0;
}
