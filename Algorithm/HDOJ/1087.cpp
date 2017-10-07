#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while (cin >> n && n)
    {
        int  arr[1005] = {}, dp[1005] = {}, temp = 0, Max = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        dp[0] = arr[0];
        for (int i = 1; i < n; i++) 
        {
            int temp = 0;
            for (int j = 0; j<i; j++)
                if (arr[j] < arr[i] && temp < dp[j])
                    temp = dp[j];
            dp[i] = temp + arr[i];
            if (Max < dp[i])
                Max = dp[i];
        }
        cout << Max << endl;
    }
}