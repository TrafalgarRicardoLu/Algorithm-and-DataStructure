#include<cstdio>  
#include<iomanip>
#include<iostream>  
#include<algorithm>  
using namespace std;
struct s
{
    double x, y;
}list[110];
int stack[110], top;
double dis(s aa, s bb)
{
    return sqrt((aa.x - bb.x)*(aa.x - bb.x) + (aa.y - bb.y)*(aa.y - bb.y));
}
double cross(s p0, s p1, s p2)
{
    return (p1.x - p0.x)*(p2.y - p0.y) - (p1.y - p0.y)*(p2.x - p0.x);
}
bool cmp(s aa, s bb)
{
    double num = cross(list[0], aa, bb);
    if (num>0) return true;
    else if (num == 0 && dis(list[0], aa)<dis(list[0], bb)) return true;
    else return false;
}
void graham(int n)
{
    int i;
    if (n == 1) { top = 0; stack[0] = 0; }
    if (n == 2) { top = 1; stack[0] = 0; stack[1] = 1; }
    if (n>2)
    {
        for (i = 0; i<2; i++)
            stack[i] = i;
        top = 1;
        for (i = 2; i<n; i++)
        {
            while (top>0 && cross(list[stack[top - 1]], list[stack[top]], list[i]) <= 0) top--;
            top++;
            stack[top] = i;
        }
    }
}
int main()
{
    int n,i;
    while (cin >> n &&n)
    {
        s low;
        cin >> list[0].x >> list[0].y;
        low.x = list[0].x, low.y = list[0].y;
        int k = 0;
        for (i = 1; i < n; i++)
        {
            cin >> list[i].x >> list[i].y;
            if (((low.y == list[i].y) && (low.x > list[i].x)) || low.y > list[i].y)
            {
                low.x = list[i].x;
                low.y = list[i].y;
                k = i;
            }
        }
        if (n == 1)
            cout << 0.00 << endl;
        else if (n == 2)
            cout << fixed << setprecision(2) << dis(list[0], list[1]) << endl;
        else
        {
            list[k] = list[0];
            list[0] = low;
            sort(list + 1, list + n, cmp);
            graham(n);
            double ans = 0;
            for (i = 0; i < top; i++)
            {
                ans += dis(list[stack[i]], list[stack[i + 1]]);
            }
            ans += dis(list[stack[0]], list[stack[top]]);
            printf("%.2lf\n", ans);
        }
    }
    return 0;
}