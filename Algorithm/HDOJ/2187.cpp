#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
struct d
{
    double prince;
    double weight;
};
bool cmp(d a, d b)
{
    return a.prince < b.prince;
}
int main()
{
    int T;
    while(cin >> T)
        while (T--)
        {
            int m;
            double n;
            double sum = 0;
            d a[1000];
            cin >> n >> m;
            for (int i = 0; i < m; i++)
                cin >> a[i].prince >> a[i].weight;
            sort(a, a + m, cmp);
            for (int i = 0; i < m; i++)
            {
                if (n >= (a[i].prince*a[i].weight))
                {
                    sum += 1.0*a[i].weight;
                    n -= a[i].weight*a[i].prince;
                }
                else if (n < (a[i].prince*a[i].weight)&& n > 0)
                {
                    sum += 1.0*(n / a[i].prince);
                    n = 0;
                }
                else if (n == 0)
                    break;
            }
            cout <<fixed<<setprecision(2)<< sum << endl;
        }
}