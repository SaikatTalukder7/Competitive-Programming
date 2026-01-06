#include <bits/stdc++.h>
using namespace std;

int main()
{
    string guest, host, pile;
    cin >> guest >> host >> pile;

    vector<int> freq(26, 0);

    for (int i = 0; i < guest.size(); i++)
    {
        freq[guest[i] - 'A']++;
    }

    for (int i = 0; i < host.size(); i++)
    {
        freq[host[i] - 'A']++;
    }

    for (int i = 0; i < pile.size(); i++)
    {
        freq[pile[i] - 'A']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}
