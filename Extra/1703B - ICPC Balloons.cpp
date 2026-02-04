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

        set<char> seen;
        int balloons = 0;

        for (char c : s)
        {
            if (seen.count(c) == 0)
            {
                balloons += 2;
                seen.insert(c);
            }
            else
            {
                balloons += 1;
            }
        }

        cout << balloons << endl;
    }

    return 0;
}
