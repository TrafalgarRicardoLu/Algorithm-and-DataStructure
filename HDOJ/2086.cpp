#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double n,a0,an1;
    while (cin >> n)
    {
        cin >> a0 >> an1;
        double a1=0,c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            a1 -= 2*(n-i)*c;
        }
        a1 += n*a0 + an1;
        cout << fixed << setprecision(2) << a1 / (n + 1) << endl;

    }
}