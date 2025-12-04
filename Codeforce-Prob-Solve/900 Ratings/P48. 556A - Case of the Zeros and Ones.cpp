#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    int count1 = 0, count2 = 0;
    for (char c : st) 
    {
        if (c == '0') 
        {
          count1++;
        }
        else 
        {
          count2++;
        }
    }
    cout << abs(count1 - count2) << endl;
    return 0;
}
