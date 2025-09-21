#include <bits/stdc++.h>
using namespace std;

void solution(int n, int &t)
{
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            t = 1;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int t = 0;
    solution(n, t);
    if (t == 1)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
}
