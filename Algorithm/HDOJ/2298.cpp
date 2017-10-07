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
        double a, b, c, angle;
        double x, y, z, v, g = 9.8, T, ans1, ans2;
        cin >> x >> y >> v;
        if (!x && !y)
            cout << "0" << endl;
        else if (!x&&y > 0)
            cout << "90" << endl;
        else
        {
            a = g*x*x / (2 * v*v);
            b = -x;
            c = y + a;
            T = b*b - 4*a*c;
            angle = 0;
            if (T < 0)
                cout << "-1" << endl;
            else
            {
                ans1 = ((-b) + pow(T, 1.0 / 2)) / (2 * a);
                ans2 = ((-b) - pow(T, 1.0 / 2)) / (2 * a);
                if (ans1 >= 0) angle = atan(ans1);
                if (ans2 >= 0)
                {
                    z = atan(ans2);
                    if (z<angle) angle = z;
                    cout << fixed << setprecision(6) << angle << endl;
                }
                if (ans1 < 0 && ans2 < 0)
                    cout << "-1" << endl;
            }
        }
    }
    return 0;
}