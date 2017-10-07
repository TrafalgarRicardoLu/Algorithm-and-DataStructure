#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string a, b;
int LCS(int n, int m)
{
    int L[500][500] = {};
    for(int i=1;i<=n;i++)
        for (int j = 1; j <= m; j++)
        {
            if (a[i-1] == b[j-1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    return L[n][m];
}
int main()
{
    while (cin >> a >> b)
    {
        int n = a.length();
        int m = b.length();
        cout << LCS(n,m) << endl;
    }
}