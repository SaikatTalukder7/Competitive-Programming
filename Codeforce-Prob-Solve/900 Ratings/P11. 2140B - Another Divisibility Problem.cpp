#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; 

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x; 
        long long y = 1000000000 - 1 - x;
        cout << y << "\n"; 
    }

    return 0;
}
