#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, N;
    cin >> a >> N;

    const int LIMIT = 1000000;
    vector<int> dist(LIMIT, -1);
    queue<int> q;

    dist[1] = 0;
    q.push(1);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();

        int d = dist[x];

        long long m = x * a;
        if (m < LIMIT && dist[m] == -1)
        {
            dist[m] = d + 1;
            q.push(m);
        }

        if (x >= 10 && x % 10 != 0)
        {
            string s = to_string(x);
            string t = s.back() + s.substr(0, s.size() - 1);
            int y = stoi(t);

            if (y < LIMIT && dist[y] == -1)
            {
                dist[y] = d + 1;
                q.push(y);
            }
        }
    }

    cout << dist[N] << endl;
    return 0;
}