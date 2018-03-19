#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, arr[105][105], dp[105][105] = {};
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> arr[i][j];
        dp[1][1] = 1;
        for(int i = 1;i<=n;i++)
            for (int j = 1; j <= m; j++)
            {
                int temp = arr[i][j];
                for (int k = 0; k <= temp&&i + k <= n; k++)
                    for (int l = 0; l + k <= temp&&j + l <= m; l++)
                    {
                        if (!k && !l)
                            continue;
                        dp[i + k][j + l] = (dp[i + k][j + l] + dp[i][j]) % 10000;
                    }
            }
        cout << dp[n][m] << endl;


    }
}