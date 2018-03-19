#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a;
        int b, c;
        cin >> a >> b >> c;
        if (a == '+')
            cout << b + c << endl;
        else if (a == '-')
            cout << b - c << endl;
        else if (a == '*')
            cout << b* c << endl;
        else if (a == '/')
        {
            if (b % c == 0)
                cout << b / c << endl;
            else
                cout << fixed << setprecision(2) << 1.0*b / c << endl;
        }
    }
}