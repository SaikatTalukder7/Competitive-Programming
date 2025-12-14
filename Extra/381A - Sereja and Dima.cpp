#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 0;
    int r = n - 1;

    int sereja = 0;
    int dima = 0;

    bool turn = true; 

    while (l <= r)
    {
        int taken;

        if (a[l] > a[r])
        {
            taken = a[l];
            l++;
        }
        else
        {
            taken = a[r];
            r--;
        }

        if (turn)
        {
            sereja += taken;
        }
        else
        {
            dima += taken;
        }

        turn = !turn;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
