#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;

bool check(const int &r, const int &c, const vector<string> &grid)
{
    int cnt = 0;
    if (c + 6 <= n)
    {
        for (int j = c; j < c + 6; ++j)
            if (grid[r][j] == '#')
                ++cnt;
        if (cnt >= 4)
            return true;
        cnt = 0;
    }
    if (r + 6 <= n)
    {
        for (int i = r; i < r + 6; ++i)
            if (grid[i][c] == '#')
                ++cnt;
        if (cnt >= 4)
            return true;
        cnt = 0;
    }
    if (r + 6 <= n && c + 6 <= n)
    {
        int i = r, j = c;
        for (int t = 0; t < 6; ++t)
        {
            if (grid[i][j] == '#')
                ++cnt;
            ++i;
            ++j;
        }
        if (cnt >= 4)
            return true;
        cnt = 0;
    }
    if (r + 6 <= n && c - 5 >= 0)
    {
        int i = r, j = c;
        for (int t = 0; t < 6; ++t)
        {
            if (grid[i][j] == '#')
                ++cnt;
            ++i;
            --j;
        }
        if (cnt >= 4)
            return true;
    }
    return false;
}

int main()
{
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i)
        cin >> grid[i];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (check(i, j, grid))
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}
