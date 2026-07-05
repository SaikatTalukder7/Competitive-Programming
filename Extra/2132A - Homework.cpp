#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n;

        string a;
        cin >> a;

        cin >> m;

        string b, c;
        cin >> b >> c;

        string left = "", right = "";

        for(int i = 0; i < m; i++)
        {
            if(c[i] == 'V')
            {
                left = b[i] + left;
            }
            else
            {
                right += b[i];
            }
        }

        cout << left + a + right << endl;
    }

    return 0;
}
