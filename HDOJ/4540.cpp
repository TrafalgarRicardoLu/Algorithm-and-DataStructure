#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        int arr[25][15] = {}, dp[25][15] = {},min1=10000;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < k; j++)
                cin >> arr[i][j];
        for(int i=1;i<n;i++)
            for (int j = 0; j < k; j++)
            {
                dp[i][j] = 10000;
                for (int z = 0; z < k; z++)
                    dp[i][j] = min(dp[i][j], dp[i-1][z] + abs(arr[i][j] - arr[i-1][z]));
            }
        for (int i = 0; i < k; i++)
            min1 = min(min1, dp[n-1][i]);
        cout << min1 << endl;
    }
}