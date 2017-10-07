#include<iostream>  
#include<algorithm>  
#include<queue>  
using namespace std;
const int INF = 0x7ffffff;
const int MAX = 110;
int dis[MAX], arr[MAX][MAX], n, m, mark[MAX], ele[MAX], dp[11000];
void spfa()
{
    for (int i = 0; i <= n; i++)
        dis[i] = INF, mark[i] = 0;
    queue<int> q;
    dis[0] = 0;
    mark[0] = 1;
    q.push(0);
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        mark[temp] = 0;
        for (int i = 0; i <= n; i++)
            if (dis[i] > dis[temp] + arr[temp][i])
            {
                dis[i] = dis[temp] + arr[temp][i];
                if (!mark[i])
                {
                    mark[i] = 1;
                    q.push(i);
                }
            }
    }

}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int s, e, d, sum = 0;
        scanf("%d%d", &n, &m);
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= n; j++)
                arr[i][j] = INF;
        for (int i = 0; i < m; i++)
        {
            scanf("%d%d%d", &s, &e, &d);
            if (arr[s][e] > d)
                arr[s][e] = arr[e][s] = d;
        }
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &ele[i]);
            sum += ele[i];
        }
        spfa();
        for (int i = 1; i <= sum; i++)
            dp[i] = INF;
        dp[0] = 0;
        for (int i = 1; i <= n; i++)
            for (int j = sum; j >= ele[i]; j--)
                dp[j] = min(dp[j], dp[j - ele[i]] + dis[i]);
        int ans = INF;
        for (int i = sum / 2 + 1; i <= sum; i++)
            ans = min(ans, dp[i]);
        if (ans >= INF)
            cout << "impossible" << endl;
        else
            cout << ans << endl;
    }
}