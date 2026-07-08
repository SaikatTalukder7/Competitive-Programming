#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> a;

        for (int i = 0; i < n - 1; i++) {
            a.push_back(b[i]);

            if (b[i] > b[i + 1]) {
                a.push_back(1);
            }
        }

        a.push_back(b[n - 1]);

        cout << a.size() << "\n";
        for (int x : a) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
