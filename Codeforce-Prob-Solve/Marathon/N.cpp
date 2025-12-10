#include <bits/stdc++.h>
using namespace std;

void saikatt()
{
    int n;
    cin >> n;
    vector<int> vel(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> vel[i];
    }
    double V;
    cin >> V;
    int saikat;
    cin >> saikat;
    vector<long long> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + vel[i];
    }
    while (saikat--)
    {
        int L, R;
        cin >> L >> R;
        long long sum = pre[R] - pre[L - 1];
        double avg = (double)sum / (R - L + 1);

        if (avg >= V)
        {
            cout << "Hurray! we made it in time!!" << endl;
        }
        else
        {
            cout << "Oh! we missed it!!" << endl;
        }
    }
}
int main()
{
    saikatt();
    return 0;
}
