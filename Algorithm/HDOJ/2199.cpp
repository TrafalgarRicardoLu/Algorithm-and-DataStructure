#include <cstdlib>
#include <iostream>

using namespace std;

const double d = 1e-8;

bool solve(double m, double y)
{
    if (y - (8 * m*m*m*m + 7 * m*m*m + 2 * m*m + 3 * m + 6) >= (1e-20))
        return true;
    else return false;
}

int main()
{
    int n;
    double l, r, m, y;
    scanf("%d", &n);
    while (n--)
    {
        l = 0;
        r = 100;
        scanf("%lf", &y);
        if (y<6 || y>807020306) 
            printf("No solution!\n");
        else
        {
            while (r - l>d)
            {
                m = (l + r) / 2;
                if (solve(m, y)) l = m;
                else r = m;
            }
            printf("%.4lf\n", l);
        }
    }
    return 0;
}