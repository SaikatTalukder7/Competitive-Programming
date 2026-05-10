#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int open = 0;
        int close = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                open++;
            }
            else
            {
                close++;
            }
        }
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else if (open == close)
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
