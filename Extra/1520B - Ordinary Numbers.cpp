#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        string s = to_string(n);
        int len = s.size();

        int ans = (len - 1) * 9;

        for (int d = 1; d <= 9; d++)
        {
            long long num = 0;
            for (int i = 0; i < len; i++)
                num = num * 10 + d;

            if (num <= n)
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}
