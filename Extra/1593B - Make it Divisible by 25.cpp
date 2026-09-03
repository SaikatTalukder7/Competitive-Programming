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

        vector<string> target = {"00", "25", "50", "75"};

        int ans = 100;

        for (string p : target)
        {
            int moves = 0;
            int j = 1;

            // Find the second digit of the target
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] == p[j])
                {
                    j--;

                    if (j < 0)
                        break;
                }
                else
                {
                    moves++;
                }
            }

            if (j < 0)
                ans = min(ans, moves);
        }

        cout << ans << '\n';
    }

    return 0;
}
