#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long b, d;
    cin >> n >> b >> d;
    long long waste = 0;
    int empty = 0;
    for (int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;
        if (a <= b)
        {
            waste += a;
            if (waste > d)
            {
                empty++;
                waste = 0;
            }
        }
    }

    cout << empty << endl;
    return 0;
}
