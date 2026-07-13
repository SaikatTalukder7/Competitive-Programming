#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;
    long long d;
    char ch;
    int distressed = 0;

    while (n--)
    {
        cin >> ch >> d;

        if (ch == '+')
        {
            x += d;
        }
        else
        {
            if (x >= d)
            {
                x -= d;
            }
            else
            {
                distressed++;
            }
        }
    }

    cout << x << " " << distressed << endl;

    return 0;
}
