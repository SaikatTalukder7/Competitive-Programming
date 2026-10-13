#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        string str;
        cin >> str;

        int n = stoi(str);
        int len = str.length() - 1;
        int k = pow(10, len);

        cout << n - k << endl;
    }

    return 0;
}
