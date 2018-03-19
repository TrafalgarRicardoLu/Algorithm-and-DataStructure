#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b && (a||b))
    {
        if ((int)sqrt(a * a - 4 * b) == sqrt(a * a - 4 * b))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}     