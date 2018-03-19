#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,m;
    while (cin >> n)
    {
        while (n--)
        {
            double sum = 0;
            cin >> m;
            for (int i = 1; i <= m; i++)
            {
                double k = 1.0 / i;
                if (i % 2 == 0)
                    sum -= k;
                else
                    sum += k;
            }
            cout << fixed<<setprecision(2)<< sum << endl;
        }
    }
}