#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        long long mina = *min_element(a.begin(), a.end());
        long long minb = *min_element(b.begin(), b.end());

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            long long candy = a[i] - mina;
            long long orange = b[i] - minb;

            ans += max(candy, orange);
        }

        cout << ans << '\n';
    }

    return 0;
}
