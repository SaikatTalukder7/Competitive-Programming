
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        set<long long> seen;
        seen.insert(0);
        long long sum = 0;
        bool found = false;
        for (int i = 1; i <= n; i++){
            long long x;
            cin >> x;
            if (i % 2 == 1){
                sum += x;
            }
            else{
                sum -= x;
            }
            if (seen.count(sum)){
                found = true;
            }
            seen.insert(sum);
        }
        cout << (found ? "YES" : "NO") << '\n';
    }
    return 0;
}
