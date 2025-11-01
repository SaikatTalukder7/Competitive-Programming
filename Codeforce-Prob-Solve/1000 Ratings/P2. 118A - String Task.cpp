#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string vow = "aoyeuiAOYEUI";
    string rslt = "";
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        bool isVowel = false;
        for (int j = 0; j < vow.length(); j++)
        {
            if (c == vow[j])
            {
                isVowel = true;
                break;
            }
        }
        if (!isVowel)
        {
            if (c >= 'A' && c <= 'Z')
            {
                c = c + ('a' - 'A');
            }
            rslt = rslt + '.' + c;
        }
    }
    cout << rslt << endl;
    return 0;
}
