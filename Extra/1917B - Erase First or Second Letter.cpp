#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        string s;
        cin >> n >> s;

        map<char, int> mark;
        long long result = 0;

        for (int j = 0; j < n; j++)
        {
            if (!mark[s[j]])
            {
                result += n - j;
                mark[s[j]] = 1;
            }
        }

        cout << result << '\n';
    }

    return 0;
}
