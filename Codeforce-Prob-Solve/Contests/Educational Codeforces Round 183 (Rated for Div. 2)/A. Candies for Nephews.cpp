#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int reminder = n % 3;
        int ans = (3 - reminder) % 3;
        cout << ans << "\n";
    }
}
