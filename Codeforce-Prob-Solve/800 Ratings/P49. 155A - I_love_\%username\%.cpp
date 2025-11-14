#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }
    int mn = v[0];  
    int mx = v[0];  
    int cnt = 0;    
    for (int i = 1; i < n; i++) 
    {
        if (v[i] > mx) 
        {
            cnt++;
            mx = v[i];
        } 
        else if (v[i] < mn) 
        {
            cnt++;
            mn = v[i];
        }
    }
    cout << cnt << endl;
    return 0;
}
