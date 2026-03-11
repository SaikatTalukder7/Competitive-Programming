#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a, b;
        cin >> a >> b;

        long long x = min(a, b);
        long long y = max(a, b);

        long long side = max(2 * x, y);

        cout << side * side << endl;
    }
}
