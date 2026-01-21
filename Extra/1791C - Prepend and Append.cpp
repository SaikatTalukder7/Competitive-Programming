#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int length = n;
        for (int i = 0; i < n / 2; i++) 
        {
            if ((s[i] == '0' && s[n - i - 1] == '1') || (s[i] == '1' && s[n - i - 1] == '0')) 
            {
                length -= 2;
            } 
            else 
            {
                break;
            }
        }
        cout << length << endl;
    }

    return 0;
}
