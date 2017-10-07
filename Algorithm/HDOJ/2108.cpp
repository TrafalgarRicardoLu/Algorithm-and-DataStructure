#include<iostream>
using namespace std;
double sigma(double x1,double y1, double x2, double y2,double x3,double y3)
{
    return (x2-x1)*(y3-y1)-(x3-x1)*(y2-y1);
}
int main()
{
    int n;
    while (cin >> n&&n)
    {
        int l = 0;
        double x1[1100],y1[1100];
        for (int i = 0; i < n; i++)
            cin >> x1[i] >> y1[i];
        x1[n] = x1[0], y1[n] = y1[0], x1[n + 1] = x1[1], y1[n + 1] = y1[1];
        for (int i = 0; i <= n - 1; i++)
        {
            if (sigma(x1[i], y1[i], x1[i + 1], y1[i + 1], x1[i + 2], y1[i + 2]) < 0)
            {
                l = 1; break;
            }
        }
        if (l)
            cout << "concave" << endl;
        else
            cout << "convex" << endl;
    }
}