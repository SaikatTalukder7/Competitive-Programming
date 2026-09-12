#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<long long> v(7);

        for (int i = 0; i < 7; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        long long sum = 0;

        for (int i = 0; i < 6; i++)
            sum -= v[i];

        sum += v[6];

        cout << sum << '\n';
    }

    return 0;
}
