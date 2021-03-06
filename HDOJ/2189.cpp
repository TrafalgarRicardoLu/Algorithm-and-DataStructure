#include<iostream>
#include<algorithm>
using namespace std;
int prime[50] = { 2,  3,  5,  7,  11,13, 17, 19, 23, 29,31, 37, 41, 43, 47,53, 59, 61, 67, 71,73, 79, 83, 89, 97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199 };
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, dp[155] = {},N;
        dp[0] = 1;
        cin >> n;
        for (int i = 0; i < 46; i++)
            if (prime[i] <= n)
                N = i;
        for (int i = 0; i <= N; i++)
            for (int j = prime[i]; j <= n; j++)
                dp[j] += dp[j - prime[i]];
        cout << dp[n] << endl;
    }
} 