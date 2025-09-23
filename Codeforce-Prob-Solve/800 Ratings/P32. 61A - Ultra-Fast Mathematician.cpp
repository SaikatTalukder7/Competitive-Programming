#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    string count = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
        {
            count += '0';
        }
        else
        {
            count += '1';
        }
    }
    cout << count << endl;
}
