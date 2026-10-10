#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<long long> a(n);
        long long minAns = 0;
        long long maxAns = 0;
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            sum += a[i];

            maxAns += a[i] / x;

            if (a[i] % x != 0)
            {
                maxAns++;
            }
        }

        minAns = sum / x;

        if (sum % x != 0)
        {
            minAns++;
        }

        cout << minAns << " " << maxAns << endl;
    }

    return 0;
}
