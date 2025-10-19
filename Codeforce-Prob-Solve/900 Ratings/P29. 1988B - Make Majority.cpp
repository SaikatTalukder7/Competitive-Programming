#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int testc;
    cin >> testc;

    while (testc--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> arr;
        for (char c : s)
        {
            int x = c - '0';
            if (!arr.empty() && arr.back() == 0 && x == 0)
            {
                continue;
            }
            arr.push_back(x);
        }

        int bal = 0;
        for (int x : arr)
        {
            if (x == 1)
            {
                bal++;
            }
            else
            {
                bal--;
            }
        }

        if (bal > 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}


or


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
        string a;
        cin >> a;
        int count = 0;
        int zBlock = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] == '1')
            {
                count++;
            }
            else
            {
                if (i == 0 || a[i - 1] == '1')
                {
                    zBlock++;
                }
            }
        }
        if (count > zBlock)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
