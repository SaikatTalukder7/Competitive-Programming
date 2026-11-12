
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> height(n);

        for (int i = 0; i < n; i++)
        {
            cin >> height[i];
        }

        sort(height.begin(), height.end());

        vector<int> shelf;
        vector<int> extra;
        vector<int> descending;

        for (int i = 0; i < n; )
        {
            int j = i;

            while (j < n && height[j] == height[i])
            {
                j++;
            }

            shelf.push_back(height[i]);

            if (j - i >= 2)
            {
                descending.push_back(height[i]);
            }

            for (int k = i + 2; k < j; k++)
            {
                extra.push_back(height[i]);
            }

            i = j;
        }

        int visible = shelf.size() + descending.size();

        for (int x : extra)
        {
            shelf.push_back(x);
        }

        for (int i = (int)descending.size() - 1; i >= 0; i--)
        {
            shelf.push_back(descending[i]);
        }

        cout << visible << '\n';

        for (int i = 0; i < n; i++)
        {
            cout << shelf[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}
