#include<iostream>
using namespace std;
int main()
{
    int a[4];
    while (cin >> a[0]>>a[1]>>a[2] )
    {
        int count = 0;
        for (int i = 0; i <= 2; i++)
        {
            if (a[i] <= 168)
            {
                cout << "CRASH " << a[i] << endl;
                count++;
            }
            
        }
        if (count == 0)
            cout << " NO CRASH" << endl;

    }
}