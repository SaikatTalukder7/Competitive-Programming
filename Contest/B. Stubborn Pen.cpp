
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        string s;
        cin >> n >> s;

        char current = 'R';
        int switches = 0;

        for (char ch : s)
        {
            if (current != ch)
            {
                switches++;
            }

            current = (ch == 'R') ? 'B' : 'R';
        }

        cout << switches << '\n';
    }

    return 0;
}
