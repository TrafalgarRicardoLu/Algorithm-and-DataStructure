#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<limits.h>
#include<cmath>
#include<queue>
#include<algorithm>
using namespace std;
char map[30][30];
int vis[30][30];
int dir[4][2] = { { -1,0 },{ 1,0 },{ 0,-1 },{ 0,1 } };
struct node
{
    int x;
    int y;
    int time;
    node(int a, int b, int c)
    {
        x = a;
        y = b;
        time = c;
    }
};
int main()
{
    int n, m, beginx, beginy, endx, endy, time;
    while (cin >> n >> m)
    {
        for (int i = 0; i<n; i++)
            for (int j = 0; j<m; j++)
            {
                cin >> map[i][j];
                if (map[i][j] == 'S')
                {
                    beginx = i;
                    beginy = j;
                }
                if (map[i][j] == 'T')
                {
                    endx = i;
                    endy = j;
                }
            }
        for (int i = 0; i<30; i++)
            for (int j = 0; j<30; j++)
                vis[i][j] = INT_MAX;
        queue <node> que;
        que.push(node(beginx, beginy, 0));
        vis[beginx][beginy] = 0;
        while (!que.empty())
        {
            node temp = que.front();
            que.pop();
            time = temp.time;
            if (temp.x == endx&&temp.y == endy)
                break; 
            for (int i = 0; i<4; i++)
            {
                int tempx = temp.x + dir[i][0];
                int tempy = temp.y + dir[i][1];
                if (tempx >= 0 && tempx<n&&tempy >= 0 && tempy<m)
                {
                    if (map[tempx][tempy] == '*') 
                        continue;
                    if (map[tempx][tempy] == '.' || map[tempx][tempy] == 'S' || map[tempx][tempy] == 'T')
                    {
                        if (temp.time + 1<vis[tempx][tempy])
                        {
                            que.push(node(tempx, tempy, temp.time + 1));
                            vis[tempx][tempy] = temp.time + 1;
                        }
                    }
                    else
                    {
                        int tempxx = tempx + dir[i][0];
                        int tempyy = tempy + dir[i][1];
                        if (tempxx >= 0 && tempxx<n&&tempyy >= 0 && tempyy<m)
                        {
                            if (map[tempx][tempy] == '|')
                            {
                                if (temp.time % 2 == 0)
                                {
                                    if (i == 0 || i == 1)
                                    {
                                        if (temp.time + 1<vis[tempxx][tempyy])
                                        {
                                            que.push(node(tempxx, tempyy, temp.time + 1));
                                            vis[tempxx][tempyy] = temp.time + 1;
                                        }
                                    }
                                    else
                                    {
                                        if (temp.time + 2<vis[tempxx][tempyy])
                                        {
                                            que.push(node(tempxx, tempyy, temp.time + 2));
                                            vis[tempxx][tempyy] = temp.time + 2;
                                        }
                                    }
                                }
                                else
                                {
                                    if (i == 2 || i == 3)
                                    {
                                        if (temp.time + 1<vis[tempxx][tempyy])
                                        {
                                            que.push(node(tempxx, tempyy, temp.time + 1));
                                            vis[tempxx][tempyy] = temp.time + 1;
                                        }
                                    }
                                    else
                                    {
                                        if (temp.time + 2<vis[tempxx][tempyy])
                                        {
                                            que.push(node(tempxx, tempyy, temp.time + 2));
                                            vis[tempxx][tempyy] = temp.time + 2;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                if (temp.time % 2 == 0)
                                {
                                    if (i == 2 || i == 3)
                                    {
                                        if (temp.time + 1<vis[tempxx][tempyy])
                                        {
                                            que.push(node(tempxx, tempyy, temp.time + 1));
                                            vis[tempxx][tempyy] = temp.time + 1;
                                        }
                                    }
                                    else
                                    {
                                        if (temp.time + 2<vis[tempxx][tempyy])
                                        {
                                            que.push(node(tempxx, tempyy, temp.time + 2));
                                            vis[tempxx][tempyy] = temp.time + 2;
                                        }
                                    }
                                }
                                else
                                {
                                    if (i == 0 || i == 1)
                                    {
                                        if (temp.time + 1<vis[tempxx][tempyy])
                                        {
                                            que.push(node(tempxx, tempyy, temp.time + 1));
                                            vis[tempxx][tempyy] = temp.time + 1;
                                        }
                                    }
                                    else
                                    {
                                        if (temp.time + 2<vis[tempxx][tempyy])
                                        {
                                            que.push(node(tempxx, tempyy, temp.time + 2));
                                            vis[tempxx][tempyy] = temp.time + 2;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("%d\n", time);
    }
}