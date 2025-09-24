#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int count = 0;
    int b[] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; i++)
    {
        count += n / b[i];
        n %= b[i];
    }
    cout << count << endl;
    return 0;
}