#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    long long ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            int leftQ = 0;
            int rightQ = 0;

            for (int j = 0; j < i; j++)
            {
                if (s[j] == 'Q')
                {
                    leftQ++;
                }
            }

            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[j] == 'Q')
                {
                    rightQ++;
                }
            }

            ans += leftQ * rightQ;
        }
    }

    cout << ans << endl;

    return 0;
}
