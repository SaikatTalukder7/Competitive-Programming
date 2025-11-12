#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int min_s = a.front();
    int max_s = a.back();
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (a[i] > min_s && a[i] < max_s) 
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
