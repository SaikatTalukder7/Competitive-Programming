#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int tcst = 0;
    for (int i = 1; i <= w; i++)
    {
        tcst += i * k;
    }
    if (tcst > n)
    {
        cout << tcst - n<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
