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
            long long area = 0;

            for (int i = 0; i < n; i++)
            {
                long long side = a[i] + 2 * mid;

                if (side > c / side)
                {
                    area = c + 1;
                    break;
                }

                long long square = side * side;

                if (area > c - square)
                {
                    area = c + 1;
                    break;
                }

                area += square;
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
