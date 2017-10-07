#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n, m;
    while (cin >> m)
        while (m--)
        {
            cin >> n;
            int max_sum = 0;
            int arr[105][105] = {};
            for (int i = 1; i <= n; i++)
                for (int j = 1; j <= i; j++)
                {
                    cin >> arr[i][j];
                    if (i > 1)
                        arr[i][j] = arr[i][j] + arr[i - 1][j - 1] > arr[i][j] + arr[i - 1][j] ? arr[i][j] + arr[i - 1][j - 1] : arr[i][j] + arr[i - 1][j];
                    if (i == n)
                        max_sum = (arr[i][j] > max_sum ? arr[i][j] : max_sum);
                }
            cout << max_sum << endl;
        }
}