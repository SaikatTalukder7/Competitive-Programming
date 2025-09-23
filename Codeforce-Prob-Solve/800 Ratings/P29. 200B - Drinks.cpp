#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        sum += a;
    }
    cout << setprecision(12) << sum / n << endl;
}
