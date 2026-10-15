#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int arr[n];
        set<int> st;

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            st.insert(arr[j]);
        }

        int sub = n - st.size();

        if (sub % 2 == 1)
        {
            sub++;
        }

        cout << n - sub << '\n';
    }

    return 0;
}
