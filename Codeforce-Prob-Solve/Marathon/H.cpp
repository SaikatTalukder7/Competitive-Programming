#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;

    map<string, string> c;
    map<string, int> cv, pv;

    for (int i = 0; i < N; i++)
    {
        string a, b;//Hi saikat
        cin >> a >> b;
        c[a] = b;
    }

    for (int i = 0; i < M; i++)
    {
        string x;
        cin >> x;
        pv[x]++;    //Hi saikat
        cv[c[x]]++;
    }

    string bc = "";
    int mv = -1;
    for (auto &p : cv)
        if (p.second > mv || (p.second == mv && p.first < bc))
            bc = p.first, mv = p.second;    //Hi saikat

    string bp = "";
    mv = -1;
    for (auto &p : pv)
        if (p.second > mv || (p.second == mv && p.first < bp))
            bp = p.first, mv = p.second;

    cout << bc << endl;
    cout << bp << endl;
}
