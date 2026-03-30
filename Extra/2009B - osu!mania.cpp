#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < 4; j++) {
            if (grid[i][j] == '#') {
                cout << j + 1 << " ";
                break;
            }
        }
    }

    cout << "\n";
}

int main() 
{
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
