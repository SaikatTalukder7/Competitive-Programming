
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int total = x + y + z;

        bool possible = (total % 3 == 0);

        if (possible)
        {
            int target = total / 3;

            possible = (x == target - 1 &&
                        y == target &&
                        z == target + 1);
        }

        cout << (possible ? "YES" : "NO") << '\n';
    }

    return 0;
}
