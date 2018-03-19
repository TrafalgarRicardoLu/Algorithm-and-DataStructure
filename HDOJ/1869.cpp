#include<iostream>
#include<algorithm>
using namespace std;
int arr[105][105] = {};
void init()
{
    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            i == j ? arr[i][j] = 0 : arr[i][j] = 8;
}
int main()
{
    int n, m, a, b;
    while (cin >> n >> m)
    {
        init();
        int flag = 0;
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            arr[a][b] = arr[b][a] = 1;
        }
        for (int i = 0; i<n; i++)
            for (int j = 0; j<n; j++)
                for (int k = 0; k<n; k++)
                    if (arr[j][k]>arr[j][i] + arr[i][k])
                        arr[j][k] = arr[j][i] + arr[i][k];
        for(int i=0;i<n;i++)
            for (int j = 0; j < n; j++)
                if (arr[i][j] > 7)
                {
                    flag = 1;
                    break;
                }
        if (flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

}