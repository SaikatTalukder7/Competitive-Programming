#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long num;
        cin >> num;
        long long a = num % 2020;
        long long b = num / 2020;
        if (a <= b)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}