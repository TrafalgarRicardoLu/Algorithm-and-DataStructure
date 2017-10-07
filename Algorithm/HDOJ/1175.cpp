#include<iostream>
using namespace std;
int x2,y2, n, m, t;
int map[1010][1010] = {};
bool vis[1010][1010] = {};
int dx[5] = { 0,1,0,-1 };
int dy[5] = { 1,0,-1,0 };
bool flag;
void dfs(int xx,int yy,int times,int forward)
{
    for (int i = 0; i < 4; i++)
    {
        int x = xx + dx[i];
        int y = yy + dy[i];
        if (x == x2 && y == y2)
        {
            if (i != forward)
                times++;
            if (times <= 3)
                flag = true;
            return;
        }
        if (x <= 0 || x>n || y <= 0 || y>m || vis[x][y] || map[x][y])
            continue;
        vis[x][y] = 1;
        if (i == forward)
            dfs(x, y, times, forward);
        else if (times <= 2)
            dfs(x, y, times + 1, i);
        vis[x][y] = 0;
        if (flag)
            return;
    }
}
int main()
{
    int x1, y1;
    while (cin >> n >> m && n && m)
    {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> map[i][j];
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            if (map[x1][y1] != map[x2][y2] || !map[x1][y1])
            {
                cout << "NO" << endl;
                continue;
            }
            flag = false;
            memset(vis, 0, sizeof(vis));
            dfs(x1, y1, 0, 5);
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}