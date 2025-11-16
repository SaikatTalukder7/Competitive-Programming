#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        int count = 0;
        for (int i = 0; i < n - 1; i++) 
        {
            if (st[i] != st[n - 1]) 
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
