#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n >> s;

        set<char> used;
        bool ok = true;

        used.insert(s[0]);

        for(int i = 1; i < n; i++)
        {
            if(s[i] != s[i-1])
            {
                if(used.count(s[i]))
                {
                    ok = false;
                    break;
                }
                used.insert(s[i]);
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
