#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int count = 0;
        int x = 0;
        while (count < k)
        {
            x++;
            if (x % 3 != 0 && x % 10 != 3)
            {
                count++;
            }
        }
        cout << x << endl;
    }
    return 0;
}
