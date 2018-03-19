#include<iostream>
#include<iomanip>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
int set[1001] = {};
int find(int p)
{
    int q = p;
    while (p != set[p])
        p = set[p];
    while (q != p) 
    {
        int k = set[q];
        set[q] = p;
        q = k;
    }
    return p;
}
int main()
{
    int n, m;
    while (scanf("%d %d",&n,&m)!=EOF && n)
    {
        int sum = n - 1,a,b;
        for (int i = 1; i <= n; i++)
            set[i] = i;
        for (int i = 1; i <= m; i++)
        {
            scanf("%d %d", &a, &b);
            int f1 = find(a);
            int f2 = find(b);
            if (f1 != f2)
            {
                set[f1] = f2;
                sum--;
            }
        }
        cout << sum << endl;
    }
}