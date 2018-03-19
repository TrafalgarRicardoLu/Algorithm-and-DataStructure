#include<iostream>
using namespace std;
void main()
{
    _int64 a, b, c;
    while (cin >> std::hex >> a >> std::hex >> b)
    {
        c = a + b;
        if (c<0) {
            c = -c;
            cout.setf(ios::uppercase);
            cout << std::hex << "-" << c << endl;
        }
        else
        {
            cout.setf(ios::uppercase);
            cout << std::hex << c << endl;
        }
    }
}