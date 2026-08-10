#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long d;
        cin >> d;

        long long p = d + 1;

        while (!isPrime(p))
            p++;

        long long q = p + d;

        while (!isPrime(q))
            q++;

        cout << min(p * q, p * p * p) << endl;
    }

    return 0;
}
