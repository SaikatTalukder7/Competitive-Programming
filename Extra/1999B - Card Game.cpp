#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int ans = 0;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                int s1 = (i == 0 ? a1 : a2);
                int s2 = (j == 0 ? b1 : b2);

                int suneet = 0;
                int slavic = 0;

                if (s1 > s2)
                    suneet++;
                else if (s1 < s2)
                    slavic++;

                // The remaining cards
                int s3 = (i == 0 ? a2 : a1);
                int s4 = (j == 0 ? b2 : b1);

                if (s3 > s4)
                    suneet++;
                else if (s3 < s4)
                    slavic++;

                if (suneet > slavic)
                    ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
