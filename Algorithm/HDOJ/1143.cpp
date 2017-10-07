#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int dp[35][35] = {};
    dp[0][0] = 1, dp[1][1] = 1, dp[0][2] = 1;
    for (int i = 1; i < 35; i++)
    {
        dp[i][0] = dp[i - 2][0] + dp[i - 1][1] + dp[i - 2][2];
        dp[i][1] = dp[i - 1][2];
        dp[i][2] = dp[i][0] + dp[i - 1][1];
    }
    int n;
    while (cin >> n && n >= 0)
        cout << dp[n][0] << endl;
}