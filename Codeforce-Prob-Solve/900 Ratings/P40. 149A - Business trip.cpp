#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    vector<int> a(12);
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    int sum = 0;
    int months = 0;
    while (sum < k && months < 12)
    {
        sum += a[months];
        months++;
    }
    if (sum >= k)
    {
        cout << months << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
