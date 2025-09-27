#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        count++;
        if (sum > total - sum)
        {
            cout << count << endl;
            return 0;
        }
    }
}
