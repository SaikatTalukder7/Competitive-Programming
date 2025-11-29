#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, k;
    cin >> n >> k;

    int timeLeft = 240 - k;
    int solved = 0;
    int currentTime = 0;

    for (int i = 1; i <= n; i++) {
        currentTime += 5 * i;
        if (currentTime > timeLeft) break;
        solved++;
    }

    cout << solved << endl;
    return 0;
}
