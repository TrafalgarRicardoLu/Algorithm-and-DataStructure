#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m&&(n||m))
    {
        int c[10010] = {};
        double w[10010] = {}, f[10010] = {};
        for (int i = 0; i < m; i++)
            cin >> c[i] >> w[i];
        for (int i = 0; i < m; i++)
            for (int j = n; j >= c[i]; j--)
                f[j] = max(f[j], 1 - (1 - f[j - c[i]])*(1 - w[i]));
        cout <<fixed<<setprecision(1)<< 100*f[n] <<"%"<< endl;
    }
    return 0;
}