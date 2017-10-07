#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    while (cin >> t&&t)
    {
        while (t--)
        {
            double x1, y1, x2, y2, x3, y3;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            cout << fixed << setprecision(1) << (x1 + x2 + x3) / 3.0 << " " << (y1 + y2 + y3) / 3.0 << endl;
        }
    }
}