
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int target = 0;
    int current = 0;
    int unknown = 0;

    for (char ch : a)
    {
        if (ch == '+')
            target++;
        else
            target--;
    }

    for (char ch : b)
    {
        if (ch == '+')
            current++;
        else if (ch == '-')
            current--;
        else
            unknown++;
    }

    int total = 1 << unknown;
    int favorable = 0;

    for (int mask = 0; mask < total; mask++)
    {
        int position = current;

        for (int j = 0; j < unknown; j++)
        {
            if (mask & (1 << j))
                position++;
            else
                position--;
        }

        if (position == target)
        {
            favorable++;
        }
    }

    double probability = (double)favorable / total;

    cout << fixed << setprecision(12) << probability << '\n';

    return 0;
}
