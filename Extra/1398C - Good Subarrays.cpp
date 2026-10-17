#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        string s;
        cin >> n >> s;

        long long ans = 0;
        long long sum = 0;

        map<long long, long long> mp;
        mp[0] = 1;

        for (int j = 0; j < n; j++)
        {
            sum += (s[j] - '0') - 1;

            ans += mp[sum];
            mp[sum]++;
        }

        cout << ans << '\n';
    }

    return 0;
}
