#include <bits/stdc++.h>
using namespace std;

void sol(int n, int &count, string s, string p)
{
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (i == 0 || s != p)
        {
            count++;
        }
        p = s;
    }
    cout << count << endl;
}
int main()
{
    int n;
    cin >> n;
    string s, p;
    int count = 0;
    sol(n, count, s, p);
}
