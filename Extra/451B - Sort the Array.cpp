#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = -1, r = -1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            l = i;
            break;
        }
    }

    if (l == -1) {
        cout << "yes\n1 1\n";
        return 0;
    }

    r = l;
    while (r < n - 1 && a[r] > a[r + 1]) r++;

    reverse(a.begin() + l, a.begin() + r + 1);

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            cout << "no\n";
            return 0;
        }
    }

    cout << "yes\n" << l + 1 << " " << r + 1 << "\n";

    return 0;
}
