#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int m = n * (n - 1) / 2;
        vector<int> b(m);

        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        int cnt = n - 1;
        int idx = 0;

        while(cnt > 0)
        {
            cout << b[idx] << " ";
            idx += cnt;
            cnt--;
        }

        cout << 1000000000 << endl;
    }

    return 0;
}
