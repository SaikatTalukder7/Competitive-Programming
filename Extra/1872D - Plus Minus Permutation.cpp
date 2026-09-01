#include <bits/stdc++.h>
using namespace std;

long long sum(long long l, long long r)
{
    if (l > r)
        return 0;

    return (l + r) * (r - l + 1) / 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;

        long long g = gcd(x, y);
        long long lcm = (x / g) * y;

        long long common = n / lcm;

        long long positive = n / x - common;
        long long negative = n / y - common;

        long long plusSum = sum(n - positive + 1, n);
        long long minusSum = sum(1, negative);

        cout << plusSum - minusSum << '\n';
    }

    return 0;
}
