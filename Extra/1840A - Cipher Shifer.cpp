#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        string s;
        cin >> n >> s;

        string ans = "";

        for (int j = 0; j < n; j++)
        {
            ans += s[j];

            char ch = s[j];
            j++;

            while (j < n && s[j] != ch)
            {
                j++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
