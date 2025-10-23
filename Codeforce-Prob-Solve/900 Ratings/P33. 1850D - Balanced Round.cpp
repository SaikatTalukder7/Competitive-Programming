#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int count1 = 1;
        int count2 = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] <= k)
            {
                count2++;
            }
            else
            {
                count2 = 1;
            }
            count1 = max(count1, count2);
        }
        cout << n - count1 << endl;
    }
    return 0;
}
