#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    long long total_drink = k * l;
    long long total_slices = c * d;
    long long drink_toasts = total_drink / nl;
    long long lime_toasts = total_slices;
    long long salt_toasts = p / np;

    long long total_possible = min(drink_toasts, min(lime_toasts, salt_toasts));
    long long per_friend = total_possible / n;

    cout << per_friend << endl;
    return 0;
}
