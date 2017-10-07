#include<iostream>
using namespace std;
int main()
{
    int x, y, a, i;
    while (cin >> x >> y)
    {
        i = 1;
        while (i <= 1000)
        {
            a = i*x;
            if (a%y == 0)
                break;
            else
                i++;
        }
        cout << a << endl;
    }
    return 0;
}