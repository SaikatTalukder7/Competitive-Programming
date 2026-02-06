#include <bits/stdc++.h>
using namespace std;

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    int total = 0;

    for (int i = 0; i < s.length(); i++) {
        total += (s[i] == '1') * a1;
        total += (s[i] == '2') * a2;
        total += (s[i] == '3') * a3;
        total += (s[i] == '4') * a4;
    }

    cout << total << endl;
    return 0;
}
