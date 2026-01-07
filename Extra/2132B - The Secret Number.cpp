#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> ans;

        long long power = 10;

        for (int k = 1; k <= 18; k++)
        {
            long long d = power + 1;

            if (d > n)
            {
                break;
            }

            if (n % d == 0)
            {
                long long x = n / d;

                if (x > 0)
                {
                    ans.push_back(x);
                }
            }

            power *= 10;
        }

        if (ans.empty())
        {
            cout << 0 << endl;
        }
        else
        {
            sort(ans.begin(), ans.end());

            cout << ans.size() << endl;

            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
