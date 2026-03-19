#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> freq;
        int cnt = 1;
        for(int i = 1; i < n; i++)
        {
            if(a[i] == a[i - 1])
            {
                cnt++;
            }
            else
            {
                freq.push_back(cnt);
                cnt = 1;
            }
        }
        freq.push_back(cnt);
        if(freq.size() == 1)
        {
            cout << "YES\n";
        }
        else if(freq.size() == 2)
        {
            if(abs(freq[0] - freq[1]) <= 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
