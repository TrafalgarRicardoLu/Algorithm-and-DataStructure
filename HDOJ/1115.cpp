#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
struct mer
{
    int x;
    int y;
};

mer point[1000005] = {};

int main()
{
    int t;
    while (cin >> t)
        while (t--)
        {
            int n;
            double s=0,X=0,Y=0;
            cin >> n;
            for (int i = 0; i < n; i++)
                cin >> point[i].x >> point[i].y;
            for (int i = 1; i <= n; i++)
            {
                double a = (point[i%n].x*point[i - 1].y - point[i%n].y*point[i - 1].x) / 2.0;
                s += a;
                X += a*(point[i%n].x + point[i - 1].x) / 3.0;
                Y += a*(point[i%n].y + point[i - 1].y) / 3.0;
            }
            cout << fixed << setprecision(2) << X / s +0.0000001<< " " << Y / s+0.0000001 << endl;
        }
    return 0;
}