#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int robin = 0;
        int give = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                robin += a[i];
            }
            else if (a[i] == 0)
            {
                if (robin > 0)
                {
                    robin--;
                    give++;
                }
            }
        }

        cout << give << endl;
    }

    return 0;
}
