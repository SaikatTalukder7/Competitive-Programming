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
        int esum = 0;
        int osum = 0;
        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            if (x % 2 == 0) 
            {
                esum += x;
            } 
            else 
            {
                osum += x;
            }
        }
        if (esum > osum) 
        {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
    return 0;
}
