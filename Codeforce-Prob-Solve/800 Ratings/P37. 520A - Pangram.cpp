#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> lt;
    for (int i = 0; i < n; i++)
    {
        char c = towlower(s[i]);
        lt.insert(c);
    }
    if (lt.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }
    return 0;
}