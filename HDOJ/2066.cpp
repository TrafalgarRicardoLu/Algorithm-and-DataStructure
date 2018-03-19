#include<iostream>  
#include<cstring>  
#include<algorithm>  
using namespace std;
const int maxn = 1000 + 10;
const int inf = 0x3f3f3f;

int G[maxn][maxn];
int vis[maxn];
int dis[maxn];
int T, S, D;                     

void Dijkstra(int s)
{
    memset(vis, 0, sizeof(vis));
    vis[s] = 1;
    for (int i = 1; i <= 1000; i++)
        dis[i] = G[s][i];
    for (int i = 1; i < 1000; i++)
    {
        int k = -1, minn = inf;
        for (int j = 1; j <= 1000; j++)
            if (!vis[j] && dis[j] < minn)
            {
                k = j;
                minn = dis[j];
            }
        if (k == -1)
            return;
        vis[k] = 1;
        for (int j = 1; j <= 1000; j++)
            if (!vis[j] && dis[j] > G[k][j] + dis[k])
                dis[j] = G[k][j] + dis[k];
    }
}
int main()
{
    while (cin >> T >> S >> D)
    {
        memset(G, inf, sizeof(G));
        for (int i = 1; i <= T; i++)
        {
            int a, b, time;
            cin >> a >> b >> time;
            G[a][b] = G[b][a] = min(time, G[a][b]);
        }

        int start[maxn], aim[maxn];
        for (int i = 0; i < S; i++)
            cin >> start[i];
        for (int i = 0; i < D; i++)
            cin >> aim[i];

        int min_len = inf;
        for (int i = 0; i < S; i++)
        {
            Dijkstra(start[i]);
            for (int j = 0; j < D; j++)
                min_len = min(min_len, dis[aim[j]]);
            memset(dis, 0, sizeof(dis));
        }
        cout << min_len << endl;
    }
    return 0;
}