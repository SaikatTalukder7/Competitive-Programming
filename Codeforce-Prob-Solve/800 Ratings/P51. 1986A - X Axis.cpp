#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        vector<int> v = {x1, x2, x3};
        sort(v.begin(), v.end());
        int m = v[1]; 
        int ans = abs(v[0] - m) + abs(v[1] - m) + abs(v[2] - m);
        cout << ans << endl;
    }
    return 0;
}
