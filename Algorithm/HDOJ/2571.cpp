#include<iostream>
#include<algorithm>
using namespace std;
int arr[25][1005] = {};
int dp[25][1005] = {};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> arr[i][j];
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
                dp[i][j] = -1000000000;
        dp[1][1] = arr[1][1];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
            {
                for (int k = 1; k < j ; k++)
                    if (j%k == 0)
                        dp[i][j] = max(dp[i][j], dp[i][k] + arr[i][j]);
                dp[i][j] = max(dp[i][j], dp[i][j - 1] + arr[i][j]);
                dp[i][j] = max(dp[i][j], dp[i - 1][j] + arr[i][j]);
            }
        cout << dp[n][m] << endl;
    }
}