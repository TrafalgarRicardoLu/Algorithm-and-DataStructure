#include<iostream>
using namespace std;
int main()
{    
    int h;
    while (cin >> h)
    {
        cout << "1"<<endl;
        for (int i = 2; i <= h; i++)
        {
            int n = 1;
            cout << "1 ";
            for (int j = 1; j <= i - 2; j++)
            {
                n = (i - j)*n / j;
                cout << n << " ";
            }
            cout <<"1"<< endl;
        }
        cout << endl;
    }
}