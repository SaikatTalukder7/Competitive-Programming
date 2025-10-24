#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long n;
        cin >> n;
        long long count;
        if (n <= 2)
        {
            count = 0;
        }
        else
        {
            count = (n - 1) / 2;
        }
        cout << count << endl;
    }
    return 0;
}
