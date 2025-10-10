#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string st;
    cin>>st;
    map<string, int> mp;
    for(int i=0; i<n; i++)
    {
        string t = st.substr(i,2);
        mp[t]++;
    }
    string ans = "";
    int maxCount = 0;
    for(auto x : mp)
    {
        if(x.second > maxCount)
        {
            maxCount = x.second;
            ans = x.first;
        }
    }
    cout<<ans<<"\n";
}
