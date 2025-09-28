#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int mDiff = 1000000;
    for (int i = 0; i <= m - n; i++)
    {
        int diff = arr[i + n - 1] - arr[i];
        mDiff = min(mDiff, diff);
    }
    cout << mDiff << endl;
    return 0;
}