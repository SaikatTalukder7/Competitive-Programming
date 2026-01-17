#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        int count1 = 0;
        int count2 = 0;

        for (int i = 0; i < n; ++i) 
        {
            int num;
            cin >> num;
          
            if (num == 0) 
            {
                count1++;
            }
            else if (num == 1) 
            {
                count2++;
            }
        }
        
        if (count1 == 0) 
        {
            cout << "NO" << endl;
        } 
        else if (count1 > 1 && count2 == 0) 
        {
            cout << "NO" << endl;
        } 
        else 
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
