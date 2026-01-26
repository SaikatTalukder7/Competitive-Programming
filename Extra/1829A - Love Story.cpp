#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string ref = "codeforces";
    while (t--)
    {
        string s;
        cin >> s;
        int diff = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != ref[i])
            {
                diff++;
            }
        }
        cout << diff << endl;
    }
    return 0;
}
