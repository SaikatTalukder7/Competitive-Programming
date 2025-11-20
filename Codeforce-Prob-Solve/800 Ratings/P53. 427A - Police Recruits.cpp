#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == -1)
        {
            if (count1 > 0)
            {
                count1--;
            }
            else
            {
                count2++;
            }
        }
        else
        {
            count1 += x; 
        }
    }
    cout << count2 << endl;

    return 0;
}
