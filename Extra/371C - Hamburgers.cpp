#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    long long b=0,ss=0,c=0;
    for(char ch:s){
        if(ch=='B') b++;
        else if(ch=='S') ss++;
        else c++;
    }
    long long nb,ns,nc,pb,ps,pc,r;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    long long low=0,high=r+100,ans=0;
    while(low<=high){
        long long mid=low+(high-low)/2;
        long long bread=max(0LL,b*mid-nb);
        long long meat=max(0LL,ss*mid-ns);
        long long cheese=max(0LL,c*mid-nc);
        long long cost=bread*pb+meat*ps+cheese*pc;
        if(cost<=r){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
