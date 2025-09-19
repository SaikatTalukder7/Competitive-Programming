#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = n / 5;
    if (n % 5 != 0)
    {
        count++;
    }
    cout << count << endl;
}
