#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long sum = 0;
        long long mn2 = LLONG_MAX;
        long long globalMin = LLONG_MAX;

        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;

            long long first = LLONG_MAX;
            long long second = LLONG_MAX;

            for (int j = 0; j < m; j++) {
                long long x;
                cin >> x;

                if (x < first) {
                    second = first;
                    first = x;
                }
                else if (x < second) {
                    second = x;
                }
            }

            globalMin = min(globalMin, first);

            sum += second;
            mn2 = min(mn2, second);
        }

        cout << sum - mn2 + globalMin << '\n';
    }

    return 0;
}
