#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const double PI=3.1415926;
int main()
{
    double x1,y1,x2,y2;
    int n;
    while(cin >>n)
        while(n--)
    {
        cin >>x1>>y1>>x2>>y2;
        double a=1.0*sqrt(x1*x1+y1*y1);
        double b=1.0*sqrt(x2*x2+y2*y2);
        double c=1.0*sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        cout <<fixed<<setprecision(2)<<acos((a*a+b*b-c*c)/(2.0*a*b))/PI*180<<endl;
    }
    return 0;
}