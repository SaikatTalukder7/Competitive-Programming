#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    string t1 = "", t2 = "";
    int cnt1 = 0, cnt2 = 0;

    while (n--) 
    {
        string s;
        cin >> s;
        if (t1 == "" || t1 == s) 
        {
            t1 = s;
            cnt1++;
        } 
        else 
        {
            t2 = s;
            cnt2++;
        }
    }
    if (cnt1 > cnt2) 
    {
      cout << t1 << endl;
    }
    else 
    {
      cout << t2 << endl;
    }
    return 0;
}
