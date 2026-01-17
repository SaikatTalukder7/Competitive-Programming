#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    for (int j = 0; j < t; ++j) 
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int count1 = 0;
        int count2 = -1;

        for (int i = n - 1; i >= 0; --i) 
        {
            if (str[i] == '(') 
            {
                count1++;
            } 
            else 
            {
                if (count1 >= 2) 
                {
                    count2 = n - 2;
                    break;
                }
            }
        }
        cout << count2 << endl;
    }

    return 0;
}
