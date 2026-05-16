#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int h = (s[0] - '0') * 10 + (s[1] - '0');
    string mm = "";

    mm += s[3];
    mm += s[4];

    string type;

    if (h >= 12)
    {
        type = "PM";
    }
    else
    {
        type = "AM";
    }

    if (h == 0)
    {
        h = 12;
    }
    else if (h > 12)
    {
        h -= 12;
    }

    if (h < 10)
    {
        cout << "0";
    }

    cout << h << ":" << mm << " " << type << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
