#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        string s;
        cin >> s;

        int len = s.size();

        if (s[0] != s[len - 1])
        {
            s[len - 1] = s[0];
        }

        cout << s << endl;
    }

    return 0;
}
