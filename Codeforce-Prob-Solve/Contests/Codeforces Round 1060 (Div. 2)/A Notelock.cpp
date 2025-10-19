#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int saikat = 0;
        int remain = -100000;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                int pos = i + 1;
                if (remain < pos - (k - 1))
                {
                    saikat++;
                    remain = pos;
                }
                else
                {
                    remain = pos;
                }
            }
        }
        cout << saikat << '\n';
    }
    return 0;
}
