#include<iostream>
#include<cmath>
using namespace std;
double t(int a, int b, int c)
{
    double sum1 = 0,sum2=0;
    sum1 = (a % 12) * 30+b/60.0*30+c/3600.0*30;
    sum2 = b / 60.0 * 360+c/60.0*6;
    if (abs(sum1 - sum2) > 180)
        return 360 - abs(sum1 - sum2);
    else
        return abs(sum1 - sum2);

}
int main()
{
    int a,b,c;
    int n;
    while (cin >> n)
        while (n--)
        {
            cin >> a >> b>>c;
            cout <<(int) t(a, b, c) << endl;
        }
    return 0;
}