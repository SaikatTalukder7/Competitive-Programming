#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int maxVal = 0;
        int maxIdx = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > maxVal)
            {
                maxVal = a[i];
                maxIdx = i;
            }
        }
        if (maxIdx != 0)
        {
            swap(a[0], a[maxIdx]);
        }
        int sum = 0;
        int cmax = 0;
        for (int i = 0; i < n; i++)
        {
            cmax = max(cmax, a[i]);
            sum += cmax;
        }
        cout << sum << endl;
    }
    return 0;
}
