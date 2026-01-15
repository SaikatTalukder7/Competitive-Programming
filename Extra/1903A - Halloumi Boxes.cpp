#include <bits/stdc++.h>
using namespace std;

void moew()
{
    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (k == 1)
    {
        if (is_sorted(a.begin(), a.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        moew();
    }

    return 0;
}
