#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s = "codeforces";

    while (t--)
    {
        char c;
        cin >> c;

        bool found = false;

        for (char x : s)
        {
            if (x == c)
            {
                found = true;
            }
        }

        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
