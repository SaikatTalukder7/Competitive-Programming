#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
        {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        int cntEvenIdx = 0, cntOddIdx = 0;
        int cntEvenVal = 0, cntOddVal = 0;

        for (int i = 0; i < n; i++) 
        {
            if (i % 2 == 0) cntEvenIdx++;
            else cntOddIdx++;

            if (a[i] % 2 == 0) cntEvenVal++;
            else cntOddVal++;
        }

        if (cntEvenIdx != cntEvenVal || cntOddIdx != cntOddVal) 
        {
            cout << -1 << endl;
            continue;
        }

        int wrong = 0;
        for (int i = 0; i < n; i++) 
        {
            if ((i % 2) != (a[i] % 2)) 
            {
                wrong++;
            }
        }

        cout << wrong / 2 << endl;
    }

    return 0;
}
