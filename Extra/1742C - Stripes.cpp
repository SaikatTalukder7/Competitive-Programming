#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<string> a(8);

        for (int i = 0; i < 8; i++)
        {
            cin >> a[i];
        }

        bool found = false;

        for (int i = 0; i < 8; i++)
        {
            int count = 0;

            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] == 'R')
                {
                    count++;
                }
            }

            if (count == 8)
            {
                cout << "R\n";
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "B\n";
        }
    }

    return 0;
}
