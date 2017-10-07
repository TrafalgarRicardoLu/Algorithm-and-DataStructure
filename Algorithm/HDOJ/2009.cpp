#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double n, m;
    while (cin >> n >>m)
    {
        double sum = 0;
        for(int i = 0;i < m;i++)
        {
            sum += n;
            n = sqrt(n);
        }
        cout << fixed << setprecision(2) << sum << endl;
    }
}