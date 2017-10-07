#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
const double pi = 3.1415925535;
int main()
{
    double n;
    while (cin >> n&&n)
    {
        double s = n*n*pi;
        cout <<fixed<<setprecision(3)<< sqrt(1.0 / 3 * s / pi) << " " << sqrt(2.0 / 3 * s / pi) << endl;
    }
}