#include<iostream>
#include<iomanip>
#include <algorithm>
using namespace std;
struct FT
{

    double j;
    double f;
    double c;
};
bool cmp(FT a, FT b)
{
    return a.c > b.c;
}
int main()
{
    int m, n;
    while (cin >> m >> n&&(n!=-1&&m!=-1))
    {
        double sum = 0;
        FT TF[1010] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> TF[i].j >> TF[i].f; TF[i].c = TF[i].j / TF[i].f;
        }
        sort(TF, TF+n, cmp);
        for (int i = 0; i < n; i++)
        {
            if (m >= TF[i].f)
            {
                sum += TF[i].j;
                m -= TF[i].f;
            }
            else if (m > 0 && m < TF[i].f)
            {
                sum +=m*TF[i].c; break;
            }
            
        }
        if (n == 0)
            sum = 0;
        cout << fixed << setprecision(3) << sum << endl;
    }
}