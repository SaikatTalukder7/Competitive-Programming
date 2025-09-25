//This is a wrong answer.
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        int R = a[m - 1];
        cout << (n - R + 1) << "\n";
    }
}
