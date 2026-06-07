#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        ll n, k;
        cin >> n >> k;

        if (n < 45 && k > (1LL << (n - 1)))
        {
            cout << -1 << nline;
            continue;
        }
        vector<int> bit;
        k--;
        while (k)
        {
            bit.push_back(k % 2);
            k /= 2;
        }
        while ((int)bit.size() < n - 1)
        {
            bit.push_back(0);
        }
        vector<int> rev;
        int cur = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (bit[i] == 0)
            {
                cout << cur << " ";
            }
            else
            {
                rev.push_back(cur);
            }
            cur++;
        }
        cout << n << " ";
        reverse(rev.begin(), rev.end());
        for (int x : rev)
        {
            cout << x << " ";
        }
        cout << nline;
    }
    return 0;
}
