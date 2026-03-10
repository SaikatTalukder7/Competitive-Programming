#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<string> g(8);

        for(int i = 0; i < 8; i++)
        {
            cin >> g[i];
        }

        string ans = "";

        for(int j = 0; j < 8; j++)
        {
            string temp = "";

            for(int i = 0; i < 8; i++)
            {
                if(g[i][j] != '.')
                {
                    temp += g[i][j];
                }
            }

            if(!temp.empty())
            {
                ans = temp;
                break;
            }
        }

        cout << ans << endl;
    }
}
