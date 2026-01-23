#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    for (int i = 0; i < x.size(); i++)
    {
        int d = x[i] - '0';
        int inv = 9 - d;
        if (i == 0)
        {
            if (inv >= 1)
            {
                x[i] = char('0' + min(d, inv));
            }
        }
        else
        {
            x[i] = char('0' + min(d, inv));
        }
    }
    cout << x << endl;
    return 0;
}
