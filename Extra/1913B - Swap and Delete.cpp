#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int ones = 0, zeros = 0;

        for (char c : s)
        {
            if (c == '0')
                zeros++;
            else
                ones++;
        }

        int ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (ones == 0)
                {
                    ans = s.size() - i;
                    break;
                }

                ones--;
            }
            else
            {
                if (zeros == 0)
                {
                    ans = s.size() - i;
                    break;
                }

                zeros--;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
