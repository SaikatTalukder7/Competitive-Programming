#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>pre(n+1,0);
        for(int i=1;i<=n;i++){
            long long x;
            cin>>x;
            pre[i]=pre[i-1]+x;
        }
        long long ans=0;
        for(int k=1;k<=n;k++){
            if(n%k!=0){
                continue;
            }
            long long mx=0,mn=LLONG_MAX;
            for(int i=k;i<=n;i+=k){
                long long sum=pre[i]-pre[i-k];
                mx=max(mx,sum);
                mn=min(mn,sum);
            }
            ans=max(ans,mx-mn);
        }
        cout<<ans<<endl;
    }
    return 0;
}
