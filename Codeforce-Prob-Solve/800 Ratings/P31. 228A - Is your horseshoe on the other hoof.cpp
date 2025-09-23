#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<long long> shoes;
    shoes.insert(s1);
    shoes.insert(s2);
    shoes.insert(s3);
    shoes.insert(s4);
    cout << 4 - shoes.size() << endl;
}
