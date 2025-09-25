#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        int zero = 0;
        int neg = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == -1)
            {
                neg++;
            }
            else if (a == 0)
            {
                zero++;
            }
        }
        int result = zero + (neg % 2) * 2;
        cout << result << "\n";
    }
}
