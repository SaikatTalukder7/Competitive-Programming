#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int l = a[0];
        int r = a[n - 1];

        int ans = (r - l) + min(abs(s - l), abs(s - r));

        cout << ans << endl;
    }

    return 0;
}
