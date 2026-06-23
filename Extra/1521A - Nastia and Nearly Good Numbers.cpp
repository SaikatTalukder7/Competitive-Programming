#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a, b;
        cin >> a >> b;

        if(b == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            long long x = a;
            long long y = a * (b - 1);
            long long z = a * b;

            if(b == 2)
            {
                x = a * 3;
                y = a;
                z = a * 4;
            }

            cout << x << " " << y << " " << z << endl;
        }
    }

    return 0;
}
