#include<iostream>  
#include<algorithm>  
#include<cstring>  
#include<queue>  
#define N 1700 
#define INF 0x7ffffff  
using namespace std;
int arr[N][N], dis[N], v[N], cost[N][N], n, m, k[N];
void spfa(int s, int t)
{
    for (int i = 1; i <= N; i++)
        dis[i] = INF, v[i] = 0, k[i] = 0;
    queue<int> q;
    k[s] = dis[s] = 0;
    v[s] = 1;
    q.push(s);
    while (!q.empty())
    {
        int C = q.front();
        q.pop();
        v[C] = 0;
        for (int i = 1; i <= n; i++)
            if (dis[i] > dis[C] + arr[C][i])
            {
                dis[i] = dis[C] + arr[C][i];
                k[i] = k[C] + cost[C][i];
                if (!v[i])
                {
                    v[i] = 1;
                    q.push(i);
                }
            }
    }
    printf("%d %d\n", dis[t], k[t]);
}

int main()
{
    while (scanf("%d %d",&n,&m) && (n&&m))
    {
        for (int i = 1; i < N; i++)
            for (int j = 1; j < N; j++)
                cost[i][j]=arr[i][j] = INF;
        int a, b, c, d;
        for (int i = 0; i < m; i++)
        {
            scanf("%d %d %d %d", &a, &b, &c, &d);
            if (arr[a][b] > c)
            {
                arr[a][b] = arr[b][a] = c;
                cost[a][b] = cost[b][a] = d;
            }
        }
        int beg, end;
        scanf("%d %d", &beg, &end);
        if (beg == end)
            cout << 0 << endl;
        else
            spfa(beg, end);
    }
}