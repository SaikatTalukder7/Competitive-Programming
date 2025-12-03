#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    vector<long long> v(t);
    for(int i = 0; i < t; i++) 
    {
        cin >> v[i];
    }
    for(int i = 0; i < t; i++) 
    {
        long long x = v[i];
        cout << 1 << " " << x - 1 << endl;
    }
    return 0;
}
