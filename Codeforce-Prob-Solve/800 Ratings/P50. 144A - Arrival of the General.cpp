#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = -1, mn = 101;
    int posMax = 0, posMin = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
            posMax = i;        
        }
        if (a[i] <= mn)
        {
            mn = a[i];
            posMin = i;         
        }
    }
    int moves = posMax + (n - 1 - posMin);
    if (posMax > posMin)
    {
        moves -= 1;            
    }
    cout << moves << endl;
    return 0;
}
