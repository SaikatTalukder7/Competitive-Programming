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

        vector<long long> a(n);

        long long mx1 = -1, mx2 = -1;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];

            if(a[i] > mx1)
            {
                mx2 = mx1;
                mx1 = a[i];
            }
            else if(a[i] > mx2)
            {
                mx2 = a[i];
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(a[i] == mx1)
            {
                cout << a[i] - mx2 << " ";
            }
            else
            {
                cout << a[i] - mx1 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
