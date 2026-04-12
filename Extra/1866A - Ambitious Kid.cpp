#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x, ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ans = min(ans, abs(x));
    }

    cout << ans << '\n';

    return 0;
}
