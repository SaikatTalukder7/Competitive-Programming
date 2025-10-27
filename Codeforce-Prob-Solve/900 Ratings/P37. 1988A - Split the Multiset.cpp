#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        if (k == 1)
        {
            cout << n - 1 << "\n"; 
        }
        else
        {
            int ans = (n - 1 + (k - 2)) / (k - 1); 
            cout << ans << "\n";
        }
    }
    return 0;
}
