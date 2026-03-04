#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    long long bestX = 2;
    long long maxSum = 0;

    for (long long x = 2; x <= n; x++) {
        long long currentSum = 0;

        for (long long multiple = x; multiple <= n; multiple += x) {
            currentSum += multiple;
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
            bestX = x;
        }
    }

    cout << bestX << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
