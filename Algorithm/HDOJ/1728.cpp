#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
int n, m, t, k;
char map[1010][1010] = {};
bool vis[1010][1010] = {};
int dx[5] = { 0,1,0,-1 };
int dy[5] = { 1,0,-1,0 };
struct node
{
    int x, y, cnt;
};
node s, e;
bool check(int x, int y)
{
    return (x >= 0 && x<m && y >= 0 && y<n && map[x][y] == '.');
}
void dfs()
{
    queue<node> q;
    vis[s.x][s.y] = 1;
    s.cnt = -1;
    q.push(s);
    while (!q.empty())
    {
        node now = q.front(); 
        q.pop();
        for (int i = 0; i<4; i++)
        {
            node next;
            next.x = now.x + dx[i];
            next.y = now.y + dy[i];
            while (check(next.x, next.y))
            {
                if (!vis[next.x][next.y])
                {
                    vis[next.x][next.y] = 1;
                    next.cnt = now.cnt + 1;
                    q.push(next);
                    if (next.x == e.x && next.y == e.y && next.cnt <= k)
                    {
                        cout << "yes" << endl;
                        return;
                    }
                }
                next.x = next.x + dx[i];
                next.y = next.y + dy[i];
            }
        }
    }
    cout << "no" << endl;
}
int main()
{
    cin >> t;
    while (t--)
    {
        memset(vis, 0, sizeof(vis));
        memset(map, 0, sizeof(map));
        cin >> m >> n;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> map[i][j];
        cin >> k >> s.y >> s.x >> e.y >> e.x;
        s.x--, s.y--, e.x--, e.y--;
        if (s.x == e.x && s.y == e.y)
            cout << "yes" << endl;
        else if (map[e.x][e.y] == '*')
            cout << "no" << endl;
        else
            dfs();
    }
    return 0;
}