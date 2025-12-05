#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{};
    cin >> t;
    while (t--)
    {
        long long x1{}, p1{}, x2{}, p2{};
        cin >> x1 >> p1;
        cin >> x2 >> p2;

        int len1 = to_string(x1).size() + p1;
        int len2 = to_string(x2).size() + p2;

        if (len1 > len2)
        {
            cout << ">" << endl;
        }
        else if (len1 < len2)
        {
            cout << "<" << endl;
        }
        else
        {
            string s1{to_string(x1)};
            string s2{to_string(x2)};

            while (s1.size() < s2.size())
            {
                s1 += '0';
            }
            while (s2.size() < s1.size())
            {
                s2 += '0';
            }
            if (s1 > s2)
            {
                cout << ">" << endl;
            }
            else if (s1 < s2)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
    }

    return 0;
}
