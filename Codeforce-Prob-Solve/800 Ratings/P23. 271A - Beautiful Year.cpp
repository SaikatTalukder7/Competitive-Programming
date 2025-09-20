#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    int year = y + 1;
    while (true)
    {
        int y1 = year / 1000;
        int y2 = (year / 100) % 10;
        int y3 = (year / 10) % 10;
        int y4 = year % 10;

        if (y1 != y2 && y1 != y3 && y1 != y4 && y2 != y3 && y2 != y4 && y3 != y4)
        {
            cout<<year<<endl;
            break;
        }
        year++;
    }
}
