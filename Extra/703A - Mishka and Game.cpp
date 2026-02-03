#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int m = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        if (x > y) 
        {
          m++;
        }
        else if (y > x) 
        {
          c++;
        }
    }

    if (m > c) 
    {
      cout << "Mishka" << endl;
    }
    else if (c > m) 
    {
      cout << "Chris" << endl;
    }
    else 
    {
      cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}
