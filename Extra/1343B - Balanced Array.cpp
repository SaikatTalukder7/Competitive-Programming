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

        if ((n / 2) % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            int half = n / 2;

            int sum_even = 0;
            int sum_odd = 0;

            // even numbers
            for (int i = 1; i <= half; i++)
            {
                int x = 2 * i;
                cout << x << " ";
                sum_even += x;
            }

            // odd numbers except last
            for (int i = 1; i < half; i++)
            {
                int x = 2 * i - 1;
                cout << x << " ";
                sum_odd += x;
            }

            // last odd number to balance
            int last = sum_even - sum_odd;
            cout << last << endl;
        }
    }

    return 0;
}
