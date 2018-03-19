#include<iostream>
using namespace std;
double sigma(double x1,double y1, double x2, double y2,double x3,double y3)
{
    return (x1-x2)*(y1-y3)-(x1-x3)*(y1-y2);
}
int main()
{
    int n;
    while (cin >> n&&n)
    {
        int count = 0;
        double x1[110], x2[110], y1[110], y2[110];
        for (int i = 0; i < n; i++)
            cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
        for(int i=0;i < n-1;i++)
            for (int j = i + 1; j < n; j++)
            {
                if (sigma(x1[i], y1[i], x1[j], y1[j], x2[j], y2[j])*sigma(x2[i], y2[i], x1[j], y1[j], x2[j], y2[j]) <= 0 && sigma(x1[j], y1[j], x1[i], y1[i], x2[i], y2[i])*sigma(x2[j], y2[j], x1[i], y1[i], x2[i], y2[i] )<= 0)
                    count++;
            }
        cout << count << endl;
    }
}