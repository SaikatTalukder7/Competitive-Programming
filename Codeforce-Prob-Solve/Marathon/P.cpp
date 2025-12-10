#include <bits/stdc++.h>
using namespace std;
//Hi saikat
int main()
{
    string s1, s2;
    cin>>s1>>s2;
    int x=0, y=0;

    for (int i=0; i<s1.size(); i++)
    {
        if (isdigit(s1[i]))
        {
            x += s1[i]-'0';
        }
    }
    for (int i=0; i<s2.size(); i++)
    {
        if (isdigit(s2[i]))
        {//Hi saikat
            y += s2[i]-'0';
        }
    }

    vector<int> nums;
    nums.push_back(x + y);
    nums.push_back(x * y);//Hi saikat
    nums.push_back(abs(x - y));

    sort(nums.begin(), nums.end());

    cout << "\"" << nums[1] << "\"" << endl;//Hi saikat

    return 0;
}
