#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3];
    int ans[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
            ans[i][j] = 1;
        }
    }

    int dx[] = {0, 0, 0, -1, 1};
    int dy[] = {0, -1, 1, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] % 2 == 1)
            {
                for (int k = 0; k < 5; k++)
                {
                    int x = i + dx[k];
                    int y = j + dy[k];

                    if (x >= 0 && x < 3 && y >= 0 && y < 3)
                    {
                        ans[x][y] = 1 - ans[x][y];
                    }
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
        }

        cout << '\n';
    }

    return 0;
}
