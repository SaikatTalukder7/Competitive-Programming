#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int n;
        cin >> n;
        int arr[100];
        int count[101] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            count[arr[i]]++;
        }
        int mex = 0;
        while (count[mex] > 0)
        {
            mex++;
        }
        cout << mex << endl;
    }
    return 0;
}
