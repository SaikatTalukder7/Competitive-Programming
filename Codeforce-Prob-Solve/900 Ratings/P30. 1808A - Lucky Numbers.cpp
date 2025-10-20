#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        int bestNum = l;
        int bestLuck = -1;
        int n = min(r, l + 100);
        for (int i = l; i <= n; i++)
        {
            int x = i;
            int smallest = 9, largest = 0;
            while (x > 0)
            {
                int digit = x % 10;
                smallest = min(smallest, digit);
                largest = max(largest, digit);
                x /= 10;
            }
            int cLuck = largest - smallest;
            if (cLuck > bestLuck)
            {
                bestLuck = cLuck;
                bestNum = i;
            }
            if (bestLuck == 9)
            {
                break;
            }
        }
        cout << bestNum << "\n";
    }
    return 0;
}
