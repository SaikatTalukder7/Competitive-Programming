#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0;
    for(int i=0; i<n; i++)
    {
        string st;
        cin>>st;
        if(st[0]=='+' || st[1]=='+')
        {
            x++;
        }
        else if(st[0]=='-' || st[1]=='-')
        {
            x--;
        }
    }
    cout<<x<<endl;
}
