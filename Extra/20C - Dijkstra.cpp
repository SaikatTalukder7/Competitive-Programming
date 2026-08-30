#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, long long>>> graph(n + 1);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        long long w;

        cin >> a >> b >> w;

        graph[a].push_back({b, w});
        graph[b].push_back({a, w});
    }

    vector<long long> dist(n + 1, 1e18);
    vector<int> parent(n + 1, -1);

    priority_queue<
        pair<long long, int>,
        vector<pair<long long, int>>,
        greater<pair<long long, int>>
    > pq;

    dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty())
    {
        long long d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (d != dist[u])
            continue;

        for (auto edge : graph[u])
        {
            int v = edge.first;
            long long w = edge.second;

            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                parent[v] = u;

                pq.push({dist[v], v});
            }
        }
    }

    if (dist[n] == 1e18)
    {
        cout << -1 << '\n';
        return 0;
    }

    vector<int> path;

    int node = n;

    while (node != -1)
    {
        path.push_back(node);
        node = parent[node];
    }

    reverse(path.begin(), path.end());

    for (int x : path)
        cout << x << " ";

    cout << '\n';

    return 0;
}
