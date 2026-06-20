#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long sum1 = 0, sum2 = 0, sum3 = 0;
    int x;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        sum1 += x;
    }

    for(int i = 0; i < n - 1; i++)
    {
        cin >> x;
        sum2 += x;
    }

    for(int i = 0; i < n - 2; i++)
    {
        cin >> x;
        sum3 += x;
    }

    cout << sum1 - sum2 << "\n";
    cout << sum2 - sum3 << "\n";

    return 0;
}
