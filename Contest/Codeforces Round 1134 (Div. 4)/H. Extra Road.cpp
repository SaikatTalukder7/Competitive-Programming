
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

        vector<vector<int>> adj(n + 1);

        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> parent(n + 1, 0);
        vector<int> order;
        vector<int> sz(n + 1, 1);

        order.push_back(1);
        parent[1] = -1;

        for (int i = 0; i < (int)order.size(); i++)
        {
            int u = order[i];

            for (int v : adj[u])
            {
                if (v == parent[u])
                {
                    continue;
                }

                parent[v] = u;
                order.push_back(v);
            }
        }

        for (int i = n - 1; i > 0; i--)
        {
            int u = order[i];
            sz[parent[u]] += sz[u];
        }

        int largestLoss = 0;

        for (int u = 1; u <= n; u++)
        {
            int first = 0;
            int second = 0;
            int third = 0;

            for (int v : adj[u])
            {
                if (parent[v] != u)
                {
                    continue;
                }

                int x = sz[v];

                if (x > first)
                {
                    third = second;
                    second = first;
                    first = x;
                }
                else if (x > second)
                {
                    third = second;
                    second = x;
                }
                else if (x > third)
                {
                    third = x;
                }
            }

            if (u == 1)
            {
                largestLoss = max(largestLoss, third);
            }
            else
            {
                largestLoss = max(largestLoss, second);
            }
        }

        cout << n - largestLoss << '\n';
    }

    return 0;
}
