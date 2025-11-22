#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    deque<char> dq;
    for (int i = 0; i < n; i++)
    {
        if ((n - i) % 2 == 1)   
        {
            dq.push_back(s[i]);
        }
        else                    
        {
            dq.push_front(s[i]);
        }
    }
    for (char c : dq)
    {
        cout << c;
    }
    cout << endl;
    return 0;
}
