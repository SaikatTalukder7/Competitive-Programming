#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> st;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
//Hi saikat
        if (st[name] == 0)
        {
            cout << "OK" << endl;
            st[name] = 1;
        }
        else
        {
            string new_name = name + to_string(st[name]);
            cout << new_name << endl;
            st[name]++;
            st[new_name] = 1;
        }
    }

    return 0;
}
