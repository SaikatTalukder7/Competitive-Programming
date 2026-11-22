
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,b=0;
    bool ok=true;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==25){
            a++;
        }
        else if(x==50){
            if(a>=1){
                a--;
                b++;
            }
            else ok=false;
        }
        else{
            if(b>=1 && a>=1){
                b--;
                a--;
            }
            else if(a>=3){
                a-=3;
            }
            else ok=false;
        }
    }
    cout<<(ok?"YES":"NO")<<endl;
    return 0;
}
