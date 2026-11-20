#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n),b(n);
        for(auto &x:a) cin>>x;
        for(auto &x:b) cin>>x;
        int sum=0,mx=0,ans=0;
        for(int i=0;i<min(n,k);i++){
            sum+=a[i];
            mx=max(mx,b[i]);
            ans=max(ans,sum+mx*(k-i-1));
        }
        cout<<ans<<"\n";
    }
    return 0;
}
