#include<iostream>  
#include<cstdio>  
#include<cstring>  
#include<queue>  
using namespace std;

const int INF = -0xfffffff;
const int VN = 105;

int n, m;
int w[VN][VN];
int path[VN][VN];
int point[VN];
int d[VN];
bool inq[VN];
int ans[VN];

void init()
{
    point[n] = 0;
    for (int i = 0; i <= n; ++i) 
    {
        for (int j = 1; j <= n; ++j) 
        {
            if (i == j) w[i][j] = 0;
            else w[i][j] = INF;
            path[i][j] = j;
        }
    }
}

void Floyd()
{
    for (int k = 1; k <= n; ++k)
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)if (w[i][k] != INF && w[k][j] != INF)
                if (w[i][j] <  w[i][k] + w[k][j])
                {
                    w[i][j] = w[i][k] + w[k][j];
                    path[i][j] = path[i][k];
                }
}
int main() {
    int T, u, v, cas = 1;
    cin >> T;
    while (T--)
    {
        cin>>n;
        ++n;
        init();
        for (int i = 1; i < n; ++i)
            cin >> point[i];
        cin >> m;
        for (int i = 0; i<m; ++i)
        {
            cin >> u >> v;
            w[u][v] = point[v];
        }
        Floyd();
        if (cas != 1)
            puts("");
        printf("CASE %d#\n", cas++);
        printf("points : %d\n", w[1][n]);
        printf("circuit : 1");
        int u = 1;
        while (u != n) {
            printf("->%d", path[u][n] == n ? 1 : path[u][n]);
            u = path[u][n];
        }
        puts("");
    }
    return 0;
}