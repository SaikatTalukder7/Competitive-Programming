#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int height = 0;
    int level = 1;

    while (true) {
        int need = level * (level + 1) / 2;
        if (n >= need) {
            n -= need;
            height++;
            level++;
        } else {
            break;
        }
    }

    cout << height << endl;

    return 0;
}
