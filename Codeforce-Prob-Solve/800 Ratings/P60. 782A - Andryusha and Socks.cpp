#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> socks(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> socks[i];
    }
    vector<int> count(n + 1, 0);
    int curr = 0, maxCount = 0;

    for (int i = 0; i < 2 * n; i++)
    {
        int s = socks[i];
        if (count[s] == 0)
        {
            count[s] = 1;
            curr++;
        }
        else
        {
            count[s] = 0;
            curr--;
        }
        if (curr > maxCount)
        {
            maxCount = curr;
        }
    }
    cout << maxCount << endl;
    return 0;
}
