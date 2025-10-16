#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        long long total = n * (n + 1) / 2;
        long long power = 1;
        for (; power <= n; power *= 2)
        {
            total -= 2 * power;
        }
        cout << total << "\n";
    }
    return 0;
}
