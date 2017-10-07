#include <cstdlib>
#include <iostream>
#include<cstdio>
using namespace std;

const double d = 1e-8;

double solve(double x, double y)
{
    return 6 * x*x*x*x*x*x*x + 8 * x*x*x*x*x*x + 7 * x*x*x + 5 * x*x - y*x;
}

int main()
{
    int n;
    scanf_s("%d", &n);
    while (n--)
    {
        double l = 0.0, r = 100.0,lt,rt;
        double y;
        cin >> y;
        while (r - l >= 1e-6)
        {
            lt = (2 * l + r) / 3;
            rt = (2 * r + l) / 3;
            if (solve(lt, y) < solve(rt, y))
                r = rt - 1e-7;
            else
                l = lt - 1e-7;
        }
        printf("%.4lf\n", solve((l+r)/2,y));
    }
    return 0;
}