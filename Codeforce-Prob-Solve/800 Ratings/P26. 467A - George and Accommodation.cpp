#include <bits/stdc++.h>
using namespace std;

void sol(int n, int room)
{
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int c = b - a;
        if (c >= 2)
        {
            room++;
        }
    }
    cout << room;
}

int main()
{
    int n;
    cin >> n;
    int room = 0;
    sol(n, room);
}
