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
        for (int k = 2;; k++)
        {
            long long denom = (1LL << k) - 1;
            if (n % denom == 0)
            {
                cout << n / denom << endl;
                break;
            }
        }
    }
    return 0;
}
