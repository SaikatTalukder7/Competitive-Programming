#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long ans=1,mod=1000000007;
        for(int i=0;i<k;i++){
            ans=(ans*n)%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
