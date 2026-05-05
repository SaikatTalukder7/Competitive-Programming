#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[105];
    int total_ones = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1) total_ones++;
    }
    int max_sum = -1000, cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cur += 1;
        }
        else
        {
            cur -= 1;
        }

        if (cur > max_sum)
        {
            max_sum = cur;
        }
        if (cur < 0)
        {
            cur = 0;
        }
    }
    if (max_sum <= 0)
    {
        cout << n - 1 << endl;
    }
    else
    {
        cout << total_ones + max_sum << endl;
    }
    return 0;
}
