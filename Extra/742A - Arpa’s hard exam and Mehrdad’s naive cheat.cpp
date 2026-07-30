#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        int last[] = {6, 8, 4, 2};
        cout << last[n % 4] << endl;
    }

    return 0;
}
