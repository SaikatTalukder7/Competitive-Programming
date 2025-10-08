#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int mnyErd = 0;
    int x = min(m, n);
    for (int i = 0; i < x; i++)
    {
        if (arr[i] < 0)
        {
            mnyErd += -arr[i];
        }
        else
        {
            break;
        }
    }
    cout << mnyErd << endl;
}