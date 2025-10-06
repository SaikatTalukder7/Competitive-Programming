#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string st;
        cin >> st;
        int count1 = 0, count2 = 1;
        for (int i = 0; i < n; i++)
        {
            if (st[i] == st[i - 1])
            {
                count2++;
            }
            else
            {
                count2 = 1;
            }
            if (count2 > count1)
            {
                count1 = count2;
            }
        }
        cout << count1 + 1 << "\n";
    }
}