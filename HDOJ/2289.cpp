#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
const double PI = 3.1415926535897931;
double r, R, H, h, V; 
double v(double x)
{
    return PI*x*(r*r + pow(r + (R - r) / H*x, 2) + r*(r + (R - r) / H*x)) / 3.0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> r >> R >> H >> V;
        double start = 0.0, end = H*1.0,mid;
        while (end - start > 1e-7)
        {
            mid = (start + end) / 2;
            if (v(mid) > V)
                end = mid;
            else
                start = mid;
        }
        cout <<fixed<<setprecision(6)<< mid << endl;
    }
}