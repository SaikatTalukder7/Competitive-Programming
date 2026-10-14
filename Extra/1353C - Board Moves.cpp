#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long x,y;
        cin>>x;

        x/=2;
        y=8*(x*(x+1)*(2*x+1)/6);

        cout<<y<<endl;
    }
}
