#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool ok = false;
    int pos = -1;
    for (int i = 0; i + 1 < s.size(); i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
        {
            pos = i;
            break;
        }
    }
    if (pos != -1)
    {
        for (int i = pos + 2; i + 1 < s.size(); i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'A')
            {
                ok = true;
                break;
            }
        }
    }
    pos = -1;
    if (!ok)
    {
        for (int i = 0; i + 1 < s.size(); i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'A')
            {
                pos = i;
                break;
            }
        }
        if (pos != -1)
        {
            for (int i = pos + 2; i + 1 < s.size(); i++)
            {
                if (s[i] == 'A' && s[i + 1] == 'B')
                {
                    ok = true;
                    break;
                }
            }
        }
    }
    if (ok)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
