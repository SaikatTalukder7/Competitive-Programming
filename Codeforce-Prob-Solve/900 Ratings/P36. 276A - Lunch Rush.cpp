#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;       
    long long k; 
    cin >> n >> k;

    long long maxJoy = LLONG_MIN; 

    for (int i = 0; i < n; i++)
    {
        long long f, t;
        cin >> f >> t;

        long long joy;
        if (t > k)
        {
            joy = f - (t - k); 
        }
        else
        {
            joy = f; 
        }

        if (joy > maxJoy)
        {
            maxJoy = joy;
        }
    }

    cout << maxJoy << "\n";
    return 0;
}
