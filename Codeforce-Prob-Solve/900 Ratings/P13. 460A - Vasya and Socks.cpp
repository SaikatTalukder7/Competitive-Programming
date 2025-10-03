#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int d = 0;
    int s = n;
    for (int i = 1; s > 0; i++)
    {
        s--;
        d++;
        if (i % m == 0)
        {
            s++;
        }
    }
    cout << d << "\n";
    return 0;
}