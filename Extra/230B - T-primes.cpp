#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int MAX = 1000000;

    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= MAX; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    int n;
    cin >> n;

    while (n--)
    {
        long long x;
        cin >> x;

        long long r = sqrt(x);

        if (r * r == x && isPrime[r])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
