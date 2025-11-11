#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    while (n--) 
    {
        int s;
        cin >> s;
        int total = 0;
        while (s >= 10) 
        {
            int spent = (s / 10) * 10; 
            total += spent;
            s = s - spent + (spent / 10);    
        }
        total += s; 
        cout << total << endl;
    }
    return 0;
}
