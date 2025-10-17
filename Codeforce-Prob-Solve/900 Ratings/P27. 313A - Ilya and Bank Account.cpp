#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << "\n";
    }
    else
    {
        n = -n; 
        string s = to_string(n);
        string opt1 = s.substr(0, s.size() - 1);
        string opt2 = s.substr(0, s.size() - 2) + s.back();

        long long val1 = -stoll(opt1);
        long long val2 = -stoll(opt2);

        cout << max(val1, val2) << "\n";
    }
    return 0;
}
