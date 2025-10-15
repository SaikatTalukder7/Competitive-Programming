#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (i + 4 < n && s.substr(i, 5) == "mapie")
            {
                cnt++;
                i += 4; 
            }
            else if (i + 2 < n && (s.substr(i, 3) == "map" || s.substr(i, 3) == "pie"))
            {
                cnt++;
                i += 2; 
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}
