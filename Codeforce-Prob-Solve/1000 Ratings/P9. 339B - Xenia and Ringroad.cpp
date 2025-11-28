#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long n, m;
    cin >> n >> m;

    long long time = 0;
    long long current = 1;

    for (int i = 0; i < m; i++) 
    {
        long long target;
        cin >> target;

        if (target >= current) 
        {
            time += target - current;
        }
        else 
        {
            time += (n - current) + target;
        }

        current = target;
    }
    cout << time << endl;
    return 0;
}
