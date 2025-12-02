#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    int count = 0;
    for (auto it : freq)
    {
        count = max(count, it.second);
    }
    cout << count << endl;
    return 0;
}
