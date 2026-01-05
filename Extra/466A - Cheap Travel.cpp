#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int cost_single = n * a;

    int full_passes = n / m;
    int rem = n % m;

    int cost_mix = full_passes * b + min(rem * a, b);

    cout << min(cost_single, cost_mix) << endl;

    return 0;
}
