#include<iostream>  
#include<cstdio>  
#include<cstring>  
#include<queue>  
using namespace std;
const int INF = 1000000000;
const int MAX = 100;
int path[MAX][MAX];
int w[MAX][MAX];
int tax[MAX];
int n, a, b;

void Floyd()
{
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                if (w[i][j] > w[i][k] + w[k][j] + tax[k])
                {
                    w[i][j] = w[i][k] + w[k][j]+tax[k];
                    path[i][j] = path[i][k];
                }
                else if (w[i][j] == w[i][k] + w[k][j] + tax[k])
                    if (path[i][j] > path[i][k])
                    {
                        w[i][j] = w[i][k] + w[k][j] + tax[k];
                        path[i][j] = path[i][k];
                    }
            }
}
void print_path(int u, int v) 
{
    int k;
    if (u == v)
    {
        printf("%d", v);
        return;
    }
    k = path[u][v];
    printf("%d-->", u);
    print_path(k, v);
}
int main() 
{
    while (cin >> n && n)
    {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                cin >> w[i][j];
                if (w[i][j] == -1)
                    w[i][j] = INF;
                path[i][j] = j;
            }
        for (int i = 1; i <= n; i++)
            cin >> tax[i];
        Floyd();
        while (cin >> a >> b && (a != -1 && b != -1))
        {
            if (a == b)
            {
                printf("From %d to %d :\n", a, b);
                printf("Path: %d\n", a);
                printf("Total cost : %d\n\n", 0);
            }
            else
            {
                printf("From %d to %d :\n", a, b);
                printf("Path: ");
                print_path(a, b);
                printf("\n");
                printf("Total cost : %d\n\n", w[a][b]);
            }
        }
    }
}