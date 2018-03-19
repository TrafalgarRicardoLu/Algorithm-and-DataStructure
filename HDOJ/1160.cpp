#include<iostream>
#include<algorithm>
using namespace std;
struct aa
{
    int w;
    int s;
    int t;
}a[10005];
bool camp(aa x, aa y)
{
    if (x.w != y.w)
        return x.w>y.w;
    return x.s<y.s;
}
int main()
{
    int max, maxi, t = 1,mi;
    int mer[10005];
    int dp[10005];
    for (int i = 1; i <= 10004; i++)
        mer[i] = i;
    while (cin >> a[t].w >> a[t].s)
        a[t].t = t++;
    sort(a + 1, a + t, camp);
    dp[10005] = {};
    int m = 0;
    for (int i= 1; i < t; i++)
    {
        max = 0;
        for (int j = 1; j<i; j++)
        {
            if (a[i].w<a[j].w&&a[i].s>a[j].s)
                if (max<dp[j])
                {
                    max = dp[j];
                    maxi = a[j].t;
                }
        }
        if (max)
            mer[a[i].t] = maxi;
        dp[i] = max + 1;
        if (m<dp[i])
        {
            m = dp[i];
            mi = a[i].t;
        }
    }
    if (m == 1)
        cout << 1 << endl << 1 << endl;
    else
    {
        cout << m << endl;
        while (mer[mi] != mi)
        {
            cout << mi << endl;
            mi = mer[mi];
        }
        cout << mi << endl;
    }
    return 0;
}