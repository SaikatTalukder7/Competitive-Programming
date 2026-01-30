#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }

    long long sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += h[i];
    }

    long long best = sum;
    int pos = 1;

    for (int i = k; i < n; i++)
    {
        sum += h[i];
        sum -= h[i - k];

        if (sum < best)
        {
            best = sum;
            pos = i - k + 2;
        }
    }

    cout << pos << endl;

    return 0;
}
