#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
struct node
{
    double x;
    double y;
    double cos;
};

node point[110] = {};

bool cmp(node a, node b)
{
    return a.cos > b.cos;
}
int main()
{
    int n;
    while (cin >> n&& n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> point[i].x >> point[i].y;
            point[i].cos = point[i].x / sqrt(point[i].x *point[i].x + point[i].y *point[i].y);
        }
        sort(point, point + n, cmp);
        for (int i = 0; i < n-1; i++)
            cout <<fixed<<setprecision(1)<< point[i].x <<" "<< point[i].y<<" ";
        cout << fixed << setprecision(1) << point[n-1].x << " " << point[n-1].y << endl;

    }
}