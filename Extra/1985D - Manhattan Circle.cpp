#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);

        for (int i = 0; i < n; i++)
            cin >> grid[i];

        int bestRow = 0;
        int maxCount = 0;

        for (int i = 0; i < n; i++)
        {
            int count = 0;

            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '#')
                    count++;
            }

            if (count > maxCount)
            {
                maxCount = count;
                bestRow = i;
            }
        }

        int left = m;
        int right = -1;

        for (int j = 0; j < m; j++)
        {
            if (grid[bestRow][j] == '#')
            {
                left = min(left, j);
                right = max(right, j);
            }
        }

        int bestCol = (left + right) / 2;

        cout << bestRow + 1 << " " << bestCol + 1 << '\n';
    }

    return 0;
}
