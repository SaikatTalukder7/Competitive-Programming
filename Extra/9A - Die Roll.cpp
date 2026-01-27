#include <iostream>
using namespace std;

int main()
{
    int Y, W;
    cin >> Y >> W;

    int win = 7 - max(Y, W);

    if (win <= 0)
    {
        cout << "0/1";
    }
    else if (win == 1)
    {
        cout << "1/6";
    }
    else if (win == 2)
    {
        cout << "1/3";
    }
    else if (win == 3)
    {
        cout << "1/2";
    }
    else if (win == 4)
    {
        cout << "2/3";
    }
    else if (win == 5)
    {
        cout << "5/6";
    }
    else
    {
        cout << "1/1";
    }

    return 0;
}
