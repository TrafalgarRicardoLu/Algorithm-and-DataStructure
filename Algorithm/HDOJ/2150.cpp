#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
struct node
{
    long long x;
    long long y;
};

node point[35][110] = {};

long long fun(node a, node b,node c)
{
    return (b.x - a.x)*(c.y - a.y) - (c.x - a.x)*(b.y - a.y);
}

bool cross(node a, node b, node c, node d)
{
    if (fun(a, b, c)*fun(a, d, b) >= 0 &&
        fun(a, c, d)*fun(b, d, c) >= 0) return true;
    return false;
}

int main()
{
    int n,m[35];
    while (cin >> n)
    {
        if (n == 1)
        {
            cout << "No" << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];
            for (int j = 0; j < m[i]; j++)
                cin >> point[i][j].x >> point[i][j].y;
        }
        int flag = 0;
        for(int i=0;i<n-1;i++)
            for (int j = 0; j < m[i]-1; j++)
                for (int l = i + 1; l< n; l++)
                    for (int k = 0; k < m[l] - 1; k++)
                    {
                        if (cross(point[i][j],point[i][j+1],point[l][k],point[l][k+1]))
                        {
                            flag = 1; break;
                        }
                    }
        if (!flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;

    }
}