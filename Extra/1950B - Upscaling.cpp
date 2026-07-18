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
        int sz = 2 * n;
        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                if (((i / 2) + (j / 2)) % 2 == 0)
                {
                    cout << '#';
                }
                else
                {
                    cout << '.';
                }
            }
            cout << endl;
        }
    }
    return 0;
}
