#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        int k;
        cin>>k;
        vector<long long> arr=a;
        sort(arr.begin(),arr.end());
 
        for (int i = 0; i < k; i++)
        {
            if(arr.size()<2)
            {
                break;
            }
            long long smallest=arr[0];
            long long largest=arr[arr.size()-1];
 
            arr.erase(arr.begin());
            arr.pop_back();
 
            long long diff = largest-smallest;
            arr.push_back(diff);
 
            sort(arr.begin(), arr.end());
        }
        long long sum = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            long long val = arr[j];
            sum += val;
        }
        cout<<sum<<endl;
    }
}
