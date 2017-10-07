#include<iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int b, p, o,sum=0;
        while (n--)
        {
            cin >> b >> p >> o;
            if (b > 6)
                p += (b - 6) * 8 + 27;
            else
            {
                int i = 7;
                while (b--)
                {
                    p += i; 
                    i--;
                }
            }    
            if ( p >= o)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}