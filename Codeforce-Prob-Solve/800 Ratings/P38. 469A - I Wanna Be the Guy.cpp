#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> levels;
    int p, x;
    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> x;
        levels.insert(x);
    }
    int q, y;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> y;
        levels.insert(y);
    }
    if (levels.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    return 0;
}