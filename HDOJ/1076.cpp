#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while (cin >> c)
    {
        while (c--)
        {
            cin >> a >> b;
            for (a;; a++)
            {
                if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
                    b--;
                if (b == 0)
                    break;

            }
            cout << a << endl;
        }
    }

}