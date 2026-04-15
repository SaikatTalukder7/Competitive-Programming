#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int start = (n + 1) / 2;
    for(int k = start; k <= n; k++) {
        if(k % m == 0) {
            cout << k;
            return 0;
        }
    }
    cout << -1;
}
