#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> arr(n + 1), pre(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];    //Hi saikat

        pre[i] = pre[i - 1] + (arr[i] == 0);
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        int zero = pre[r] - pre[l - 1];
        int one = (r - l + 1) - zero;    //Hi saikat


        if (zero > one)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}
