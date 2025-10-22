#include <bits/stdc++.h>
using namespace std;
int main()
{
    char d;
    string s;
    cin >> d >> s;
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string org = "";

    for (char c : s)
    {
        int pos = keys.find(c);
        if (d == 'R')
        {
            org += keys[pos - 1];
        }
        else
        {
            org += keys[pos + 1];
        }
    }
    cout << org << "\n";
    return 0;
}
