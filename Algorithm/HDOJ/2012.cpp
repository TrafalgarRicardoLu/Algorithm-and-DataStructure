#include<iostream>
using namespace std;
int main()
{
    int x, y;
    while (cin >> x >> y)
    {
        int count = 0;
        if (x == 0 && y == 0)
            break;
        else
        {
            for (x; x <= y; x++)
                for (int i = 2; i < x; i++)
                {
                    if ((x*x + x + 41) % i == 0)
                        count = 1;
                }
            if (count == 0)
                cout << "OK" << endl;
            else
                cout << "Sorry" << endl;
            
        }
    }
}