#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; 
    for (int test = 0; test < t; test++)
    {
        string s;
        cin >> s;
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
        int moves = min(count0, count1);
        if (moves % 2 == 1)
        {
            cout << "DA\n";
        }
        else
        {
            cout << "NET\n";
        }
    }
    return 0;
}
