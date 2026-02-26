#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int cnt1 = 0, cnt2 = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(x == 1) cnt1++;
            else cnt2++;
        }

        int sum = cnt1 + 2 * cnt2;

        if(sum % 2 != 0) {
            cout << "NO" << endl;
        }
        else {
            int half = sum / 2;

            if(half % 2 == 1 && cnt1 == 0) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
