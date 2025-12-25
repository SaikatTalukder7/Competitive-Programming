#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    if (!(cin >> n >> a >> b >> c)) return 0;
    
    const int NEG = -1e9;
    vector<int> dp(n + 1, NEG);
    dp[0] = 0;
    for (int i = 1; i <= n; ++i) {
        if (i - a >= 0 && dp[i - a] != NEG) 
        {
          dp[i] = max(dp[i], dp[i - a] + 1);
        }
        if (i - b >= 0 && dp[i - b] != NEG) 
        {
          dp[i] = max(dp[i], dp[i - b] + 1);
        }
        if (i - c >= 0 && dp[i - c] != NEG) 
        {
          dp[i] = max(dp[i], dp[i - c] + 1);
        }
    }
    cout << dp[n] << "\n";
    return 0;
}
