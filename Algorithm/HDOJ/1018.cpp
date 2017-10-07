#include<iostream>
#include<cmath>
using namespace std;
#define pi 3.1425926
#define e 2.71828182
int main(void)
{
    int cas, n;
    double digit;
    while (cin >> cas)
    { 
        while (cas--)
        {
            cin >> n;
            digit = log10(sqrt(2 * pi*n)) + n*log10(n / e);
            cout << int(digit+  1) << endl;

        }

    }
    return 0;
}
