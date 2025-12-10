#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;//Hi saikat
    vector<string> seen;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        bool found = false;
        for (int j = 0; j < seen.size(); j++)
        {
            if (seen[j] == s)
            {
                found = true;
                break;//Hi saikat
            }
        }
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        seen.push_back(s);
    }
    return 0;
}
