//Wrong Answer
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;
        int l = 1, r = n;
        vector<char> ans(n + 1, '+');
        for (auto c : st)
        {
            if (c == '0')
            {
                ans[l++] = '-';
            }
            else if (c == '1')
            {
                ans[r--] = '-';
            }
            else
            {
                if (l <= r)
                {
                    ans[l] = ans[r] = '?';
                    l++;
                    r--;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i];
        }
        cout << "\n";
    }
}
