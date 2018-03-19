#include<iostream>
using namespace std;
int main()
{
    int k, a;
    while (cin >> k)
    {
        for (a = 0; a <= 65; a++)
        {
            if ((18 + a*k) % 65 == 0)
            {
                cout << a << endl;
                break;
            }
            else if (a >= 65)
            {
                cout << "no" << endl;
            }
        }
    }

}