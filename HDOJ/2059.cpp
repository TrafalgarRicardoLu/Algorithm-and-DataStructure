#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<iomanip>
const int MAX = 150;
const double INF = 0xfffff;//0x代表十六进制
double DP[MAX];//DP[i]表示到第i个加电站的最小耗费时间
int s[MAX];//s[i]表示到第i个加电站距离起点的距离
using namespace std;
double Min(double x, double y)//判断大小
{
    return x>y ? y : x;
}
int main()
{
    double L;
    int n, i, j;
    double electricity_l, electricity_t;
    double vt_rabbit, vt_ele, vt_none;
    double len, sum, Time;
    while (cin >> L)
    {
        cin >> n >> electricity_l >> electricity_t;
        cin >> vt_rabbit >> vt_ele >> vt_none;
        for (i = 1; i <= n; i++)
            cin >> s[i];
        s[n + 1] = L;
        s[0] = 0;
        DP[0] = 0;
        for (i = 1; i <= n + 1; i++)
        {
            DP[i] = INF;
            for (j = 0; j<i; j++)
            {
                len = s[i] - s[j];
                if (len>electricity_l)
                    Time = electricity_l / vt_ele + (len - electricity_l) / vt_none;
                else
                    Time = len / vt_ele;
                Time += DP[j];
                if (j>0)
                {
                    Time += electricity_t;
                }
                DP[i] = Min(DP[i], Time);
            }
        }
        if (DP[n + 1]<(L / vt_rabbit))
            cout << "What a pity rabbit!" << endl;
        else
            cout << "Good job,rabbit!" << endl;
    }
    return 0;
}