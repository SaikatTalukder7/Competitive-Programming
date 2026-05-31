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

        int neg = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x == -1)
                neg++;
        }

        int ans = 0;
        int pos = n - neg;

        while (neg > pos || neg % 2 != 0)
        {
            neg--;
            pos++;
            ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}
