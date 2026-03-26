#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) {
        string w;
        cin >> w;

        w.pop_back(); 
        w.pop_back(); 

        w += 'i';

        cout << w << "\n";
    }

    return 0;
}
