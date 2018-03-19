#include<iostream>
#include<iomanip>
using namespace std;
int main()
{    
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int x[100] = {};
        int y[100] = {};
        for (int i = 0; i < n; i++)
            cin >> x[i] >> y[i];
        double sum = 0.0;
        for (int j = 0; j < n - 1; j++)
            sum += x[j]*y[j + 1] - x[j + 1]*y[j];
        sum = sum + x[n - 1] * y[0] - x[0] * y[n - 1];
        cout <<fixed<<setprecision(1)<< sum/2<<endl;
    }
}