#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        vector<int> sorted = arr;
        sort(sorted.begin(),sorted.end());
        unordered_map<int, int> color;
        for (int i = 0; i < n; i++) 
        {
            color[sorted[i]] = i % 2;
        }
        bool ok = true;
        for (int i = 0; i < n - 1; i++) 
        {
            if (color[arr[i]] == color[arr[i + 1]]) 
            {
                ok = false;
                break;
            }
        }
        if (ok) 
        {
            cout << "YES" <<endl;
        } 
        else 
        {
            cout << "NO" <<endl;
        }
    }
    return 0;
}
