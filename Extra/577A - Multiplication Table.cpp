#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x;
    cin >> n >> x;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0)
        {
            int j = x / i;

            if (j >= 1 && j <= n)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
