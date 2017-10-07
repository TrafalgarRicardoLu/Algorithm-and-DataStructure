#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
double min(double a, double b)
{
    return a > b ? b : a;
}
double max(double a, double b)
{
    return a > b ? a : b;
}
int main()
{
    double a[4], b[4];
    while (cin >> a[0] >> b[0]>>a[1]>>b[1]>> a[2]>>b[2]>>a[3]>>b[3] )
    {
        if (min(a[0], a[1]) > max(a[2], a[3]) || max(a[0], a[1]) < min(a[2], a[3]))
            cout <<"0.00"<< endl;
        else if (min(b[0], b[1]) > max(b[2], b[3]) || max(b[0], b[1]) < min(b[2], b[3]))
        {
            cout << "0.00" << endl;
        }
        else
        {
            sort(a, a + 4);
            sort(b, b + 4);
            cout << setprecision(2) << fixed << (a[2] - a[1])*(b[2] - b[1]) << endl;
        }
    }
        
}