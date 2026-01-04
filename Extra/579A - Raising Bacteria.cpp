#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long x;
    cin >> x;

    int count = 0;
    while (x > 0) 
    {    
        count += x % 2; 
        x /= 2;
    }

    cout << count << "\n";
    return 0;
}
