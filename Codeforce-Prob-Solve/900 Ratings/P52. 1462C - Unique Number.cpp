#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        vector<int> digits;

        {
            for (int d = 9; d >= 1; d--)
            {
                if (x == 0) break;

                if (x >= d)
                {
                    digits.push_back(d);
                    x -= d;
                }
                else
                {
                    digits.push_back(x);
                    x = 0;
                }
            }
        }

        if (x > 0)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(digits.begin(), digits.end());
            for (int d : digits)
            {
                cout << d;
            }
            cout << endl;
        }
    }

    return 0;
}
