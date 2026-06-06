#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a = -1, b = -1, c = -1;
        int temp = n;

        for (int i = 2; i * i <= temp; i++)
        {
            if (temp % i == 0)
            {
                a = i;
                temp /= i;
                break;
            }
        }
        if (a != -1)
        {
            for (int i = 2; i * i <= temp; i++)
            {
                if (temp % i == 0 && i != a)
                {
                    b = i;
                    temp /= i;
                    break;
                }
            }
        }
        c = temp;
        if (a != -1 && b != -1 && c > 1 && c != a && c != b)
        {
            cout << "YES\n";
            cout << a << " " << b << " " << c << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
