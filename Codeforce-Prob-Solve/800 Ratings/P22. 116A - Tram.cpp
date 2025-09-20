#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int crnt = 0;
    int cap = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        crnt -= a;
        crnt += b;
        cap = max(cap, crnt);
    }
    cout << cap << endl;
}