#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> saikat(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        if (saikat[i] == 0)
        { 
            for (int j = i; j <= n; j += i)
            {
                saikat[j]++; 
            }
        }
    }
    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        if (saikat[i] == 2)
        {
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
