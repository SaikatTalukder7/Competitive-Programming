#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> st;

void saikat() {
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        string name;
        cin >> a >> b >> name;
        st[to_string(a) + " " + to_string(b)] = name;//Hi saikat
    }
}

int main() {
    saikat();

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;//Hi saikat
        string key = to_string(a) + " " + to_string(b);
        if (st.count(key)) cout << st[key] << endl;
        else cout << endl;//Hi saikat
    }

    return 0;
}
