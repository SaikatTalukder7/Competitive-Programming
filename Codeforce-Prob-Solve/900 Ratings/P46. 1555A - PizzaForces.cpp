#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long t;
    cin >> t;
    while (t--) 
    {
        long long n;
        cin >> n;
        if (n <= 6) 
        {
            cout << 15 << endl;
        } 
        else 
        {
            if (n % 2 == 1) 
            {
              n++;
            }
            cout << (n * 5) / 2 << endl;
        }
    }
    return 0;
}
