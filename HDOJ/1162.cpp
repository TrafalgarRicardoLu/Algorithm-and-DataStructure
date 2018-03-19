#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int set[10005] = {}, Count = 0, enums = 0;
double ML;
struct node
{
    double begin;
    double end;
    double d;
};
node point[10005];
int find(int t)
{
    while (t != set[t])
        t = set[t];
    return t;
}
bool cmp(node a, node b)
{
    return a.d < b.d;
}
double kruskal()
{
    for (int i = 0; i < Count; i++)
        set[i] = i;
    for (int i = 0; i < Count; i++)
    {
        int a = find(point[i].begin);
        int b = find(point[i].end);
        if (a != b)
        {
            set[b] = a;
            ML += point[i].d;
        }
    }
    return ML;
}
int main()
{
    int n;
    while (cin >> n)
    {
        double x[100], y[100];
        for (int i = 0; i < n; i++)
            cin >> x[i] >> y[i];
        ML = 0.0;
        Count = 0;
        for(int i=0;i<n;i++)
            for (int j = i + 1; j < n; j++)
            {
                point[Count].begin=i;
                point[Count].end = j;
                point[Count++].d = sqrt((x[i] - x[j])*(x[i] - x[j]) + (y[i] - y[j])*(y[i] - y[j]));
            }
        sort(point, point + Count, cmp);
        cout <<fixed<<setprecision(2)<< kruskal() << endl;
    }
}