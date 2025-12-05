#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if (!(cin >> t))
    {
        return 0;
    }
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count1 = -1;
        int count2 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (i <= count1)
            {
                if (s[i] == '1')
                {
                    count1 = max(count1, i + k);
                }
            }
            else
            {
                if (s[i] == '1')
                {
                    count1 = i + k;
                }
                else
                {
                    count2++;
                }
            }
        }
        cout << count2 << endl;
    }
    return 0;
}
