#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool allUpper = true;
    for (int i = 0; i < s.length(); i++) {
        if (!isupper(s[i])) {
            allUpper = false;
            break;
        }
    }

    bool restUpper = true;
    for (int i = 1; i < s.length(); i++) {
        if (!isupper(s[i])) {
            restUpper = false;
            break;
        }
    }

    if (allUpper || restUpper) {
        for (int i = 0; i < s.length(); i++) {
            if (isupper(s[i]))
                s[i] = tolower(s[i]);
            else
                s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
    return 0;
}
