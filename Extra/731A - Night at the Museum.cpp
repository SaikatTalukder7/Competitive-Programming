#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    char cur = 'a';
    int ans = 0;

    for (char c : s)
    {
        int diff = abs(c - cur);
        ans += min(diff, 26 - diff);
        cur = c;
    }

    cout << ans << '\n';

    return 0;
}
