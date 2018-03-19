#include<iostream>
#include<cstring>  
#include<algorithm>  
using namespace std;

int dp[2050][2050];
int a[2050];

int main()
{
    int n, k, i, j;
    while (cin >> n >> k)
    {
        for (i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        memset(dp, 0, sizeof(dp));
        dp[2][1] = (a[2] - a[1])*(a[2] - a[1]);
        for (j = 1; j <= k; j++)
            for (i = j * 2; i <= n; i++)
            {
                dp[i][j] = dp[i - 2][j - 1] + (a[i] - a[i - 1])*(a[i] - a[i - 1]);
                if (j * 2 < i)
                    dp[i][j] = min(dp[i - 1][j], dp[i][j]);
            }
        cout << dp[n][k] << endl;
    }
    return 0;
}