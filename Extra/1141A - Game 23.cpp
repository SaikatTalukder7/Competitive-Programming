#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if(m % n != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    int x = m / n;
    int cnt = 0;
    while(x % 2 == 0)
    {
        x /= 2;
        cnt++;
    }
    while(x % 3 == 0)
    {
        x /= 3;
        cnt++;
    }
    if(x == 1)
    {
        cout << cnt << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
