#include<iostream>
#include<cstdio>
using namespace std;
int arr[2005][2005] = {};
int main()
{
    for (int i = 0; i <= 2004; i++)
    {
        arr[i][i] = 1;
        arr[i][1] = i % 1007;
    }
    for (int i = 2; i <= 2004; i++)
        for (int j = 1; j < i; j++)
            arr[i][j] = (arr[i - 1][j] + arr[i - 1][j - 1]) % 1007;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;
        cout << arr[n + 1][m + 1] << endl;
    }
}