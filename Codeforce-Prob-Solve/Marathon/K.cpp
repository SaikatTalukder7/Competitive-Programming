#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> st;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        st[a]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        if (st[a] == 0)
        {
            cout << "No" << endl;
            return 0;
        }
        st[a]--;
    }
    cout << "Yes" << endl;
    return 0;
}