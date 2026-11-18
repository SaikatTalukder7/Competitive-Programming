
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long low = a[n / 2];
    long long high = a[n / 2] + k;
    long long ans = low;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long cost = 0;
        for (int i = n / 2; i < n; i++){
            if (a[i] < mid)
            {
                cost += mid - a[i];
            }}
        if (cost <= k){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }}
    cout << ans << '\n';
    return 0;
}
