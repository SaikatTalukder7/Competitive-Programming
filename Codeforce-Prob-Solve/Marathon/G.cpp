#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<long long, long long> freq;

    for (int i = 0; i < n; i++)
    {
        long long value;
        cin >> value;
        freq[value]++;
    }
    long long removeCount = 0;
    for (unordered_map<long long, long long>::iterator it = freq.begin(); it != freq.end(); it++)
    {

        long long number = it->first;
        long long count = it->second;

        if (count >= number)
        {
            removeCount += (count - number);
        }
        else
        {
            removeCount += count;
        }
    }
    cout << removeCount;
    return 0;
}
