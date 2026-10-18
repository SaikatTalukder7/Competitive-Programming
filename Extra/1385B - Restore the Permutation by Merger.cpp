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

        int a[110];
        bool visited[55] = {};

        for (int j = 0; j < 2 * n; j++)
        {
            cin >> a[j];
        }

        for (int j = 0; j < 2 * n; j++)
        {
            if (!visited[a[j]])
            {
                cout << a[j] << " ";
                visited[a[j]] = true;
            }
        }

        cout << '\n';
    }

    return 0;
}
