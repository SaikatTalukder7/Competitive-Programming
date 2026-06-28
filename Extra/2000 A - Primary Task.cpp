#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        if(s.size() <= 2)
        {
            cout << "NO" << endl;
            continue;
        }

        if(s[0] != '1' || s[1] != '0')
        {
            cout << "NO" << endl;
            continue;
        }

        if(s[2] == '0')
        {
            cout << "NO" << endl;
            continue;
        }

        int x = stoi(s.substr(2));

        if(x >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
