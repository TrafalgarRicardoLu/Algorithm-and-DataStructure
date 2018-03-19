#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, m, a, b, c;
    while (cin >> n >> m && n && m)
    {
        int arr[105][105] = {};
        for (int i = 0; i < 105; i++)
            for (int j = 0; j < 105; j++)
                arr[i][j] = 100000000;
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b >> c;
            arr[a][b] = arr[b][a] = c;
        }
        for (int i = 1; i<=n; i++)
            for (int j = 1; j<=n; j++)
                for (int k = 1; k<=n; k++)
                    if (arr[j][k]>arr[j][i] + arr[i][k])
                        arr[j][k] = arr[j][i] + arr[i][k];
        cout << arr[1][n] << endl;
    }

}