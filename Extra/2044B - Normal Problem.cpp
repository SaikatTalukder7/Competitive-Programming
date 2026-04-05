#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string a;
        cin >> a;

        reverse(a.begin(), a.end());

        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] == 'p')
            {
                a[i] = 'q';
            }
            else if(a[i] == 'q')
            {
                a[i] = 'p';
            }
            else
            {
                a[i] = 'w';
            }
        }

        cout << a << "\n";
    }

    return 0;
}
