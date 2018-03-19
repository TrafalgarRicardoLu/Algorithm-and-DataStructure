#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
using namespace std;
int factorial(int t)
{
    int result = 1;
    for(int i = 1; i <= t; i++)
    {
        result = result * i;
    }
    return result;
}
int main()
{
    int n;
    double e;
    cout << "n e" << endl;
    cout << "- -----------" << endl;
    cout << "0 1" << endl;
    cout << "1 2" << endl;
    cout << "2 2.5" << endl;
    e = 2.5;
    for(int i = 3; i <= 9; ++i)
    {
        e = e + 1.0 / factorial(i);
        cout << i << " " << fixed << setprecision(9) << e << endl;;
    }
    return 0;
}
