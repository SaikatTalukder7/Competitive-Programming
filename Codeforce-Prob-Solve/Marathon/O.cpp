#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    //Hi saikat
    for (int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> arr(5, 0);

        for (int j=0; j<n; j++)
        {
            cin>>a[j];    //Hi saikat
            arr[a[j] % 5]++;    //Hi saikat
        }
        long long pairs = 0;
        pairs += 1 * arr[0] * (arr[0] - 1) / 2;
        pairs += 1 * arr[1] * arr[4];
        pairs += 1 * arr[2] * arr[3];

        cout<<"Case "<<i<<": "<<pairs<<endl;
    }
    return 0;
}
