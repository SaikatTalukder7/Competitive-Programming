#include <bits/stdc++.h>
using namespace std;

void sol(int n, int &t, string s)
{
    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s << endl;
}
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    sol(n, t, s);
}