#include <bits/stdc++.h>
using namespace std;
void saikat() 
{
    int n;
    cin >> n;  
    for(int i=0; i<n; i++)
    {
        int x, y, r;
        cin >> x >> y >> r;
        int yy = y / 2;
        int sspnd = r + yy;
        cout << min(x, sspnd) << endl;
    }
}
int main() 
{
    saikat(); 
    return 0;
}
