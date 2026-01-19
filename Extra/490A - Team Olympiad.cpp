#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> prog;
    vector<int> math;
    vector<int> pe;

    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            prog.push_back(i);
        }
        else if (t == 2)
        {
            math.push_back(i);
        }
        else
        {
            pe.push_back(i);
        }
    }

    int teams = min({ (int)prog.size(), (int)math.size(), (int)pe.size() });

    cout << teams << endl;

    for (int i = 0; i < teams; i++)
    {
        cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
    }

    return 0;
}
