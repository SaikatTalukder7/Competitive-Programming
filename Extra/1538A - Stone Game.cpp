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

        int a[105];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int mn = 0, mx = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[mn])
                mn = i;

            if (a[i] > a[mx])
                mx = i;
        }

        int left = min(mn, mx);
        int right = max(mn, mx);

        int ans1 = right + 1;
        int ans2 = n - left;
        int ans3 = (left + 1) + (n - right);

        cout << min({ans1, ans2, ans3}) << endl;
    }

    return 0;
}
