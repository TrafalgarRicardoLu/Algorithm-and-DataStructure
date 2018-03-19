#include<iostream>
#include<algorithm>
using namespace std;
#define inf 0xffffff
int arr[2005][2005] = {};
int main()
{
    int n, m, a, b, c, beg, end;
    while (cin >> n >> m)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                arr[i][j] = (i == j ? 0 : inf);
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b >> c;
            if (c < arr[a][b])
                arr[a][b] = arr[b][a] = c;
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                for (int k = 0; k < n; k++)
                    arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k]);
        cin >> beg >> end;
        if (arr[beg][end]==inf)
            cout << -1 << endl;
        else
            cout << arr[beg][end] << endl;
    }
    return 0;
}