#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    char a[15] = {};
    while (cin >> n&&n)
    {
        while (n--)
        {
            cin >> a;
            cout << 6;
            for (int i = 6; i < 11; i++)
                cout << a[i];
            cout << endl;
        }
    }
    return 0;
}