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
    for (int i = 0; i < q; i++)
    {
        int k;
        cin>>k;
        
        priority_queue<long long> maxheap;
        priority_queue<long long, vector<long long>, greater<long long> > minheap;
        
        long long sum =0;
        for (int i = 0; i < n; i++)
        {
            maxheap.push(a[i]);
            minheap.push(a[i]);
            sum += a[i];
        }
        for (int j = 0; j < k; j++)
        {
            if (maxheap.size()<2)
            {
                break;
            }
            long long largest = maxheap.top();
            long long smallest = minheap.top();

            maxheap.pop();
            minheap.pop();

            long long diff = largest - smallest;
            maxheap.push(diff);
            minheap.push(diff);

            sum = ((sum - largest) - smallest + diff);
        }
        cout<<sum<<endl;
    }
}
