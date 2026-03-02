#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while(t--) {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;

        vector<int> skills = {s1, s2, s3, s4};
        sort(skills.begin(), skills.end());

        int largest = skills[3];
        int secondLargest = skills[2];

        int w1 = max(s1, s2);
        int w2 = max(s3, s4);

        if((w1 == largest && w2 == secondLargest) ||
           (w1 == secondLargest && w2 == largest)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
