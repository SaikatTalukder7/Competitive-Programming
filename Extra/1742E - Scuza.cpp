
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> height(n + 1, 0);
        vector<int> maximum(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            height[i] = height[i - 1] + x;
            maximum[i] = max(maximum[i - 1], x);
        }

        while (q--)
        {
            int k;
            cin >> k;

            int left = 1;
            int right = n;
            int pos = 0;

            while (left <= right)
            {
                int mid = left + (right - left) / 2;

                if (maximum[mid] <= k)
                {
                    pos = mid;
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }

            cout << height[pos];

            if (q > 0)
            {
                cout << " ";
            }
        }

        cout << '\n';
    }

    return 0;
}
