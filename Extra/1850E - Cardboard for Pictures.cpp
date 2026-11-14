
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long low = 1;
        long long high = 1000000000;
        long long ans = 0;

        while (low <= high)
        {
            long long mid = low + (high - low) / 2;

            __int128 area = 0;

            for (int i = 0; i < n; i++)
            {
                __int128 side = a[i] + 2 * mid;
                area += side * side;

                if (area > c)
                {
                    break;
                }
            }

            if (area == c)
            {
                ans = mid;
                break;
            }
            else if (area < c)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
