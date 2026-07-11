#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    long long small = n / m;
    long long big = small + 1;
    long long rem = n % m;

    long long kmin = 0;

    {
        long long teams1 = m - rem;
        kmin += teams1 * (small * (small - 1) / 2);
    }

    {
        long long teams2 = rem;
        kmin += teams2 * (big * (big - 1) / 2);
    }

    long long kmax = 0;

    {
        long long largestTeam = n - m + 1;
        kmax = largestTeam * (largestTeam - 1) / 2;
    }

    cout << kmin << " " << kmax << endl;

    return 0;
}
