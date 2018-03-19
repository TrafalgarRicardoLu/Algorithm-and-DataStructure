#include<iostream>
using namespace std;

int d[105], map[105][105];
bool v[105];
int m,n;

int Prim()
{
    for (int i = 1; i <= n; i++) 
        d[i] = INT_MAX,v[i] = 0;
    d[1] = 0;
    for (int i = 0; i<n; i++)
    {
        int min = INT_MAX, t;
        for (int j = 1; j <= n; j++)
            if (!v[j] && min>d[j])
                min = d[t = j];
        v[t] = 1;
        for (int j = 1; j <= n; j++)
            if (!v[j] && map[t][j]<d[j])
                d[j] = map[t][j];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)  
        ans += d[i];
    return ans;
}
int main()
{
    while (cin >> n)
    {
        int a, b;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> map[i][j];
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            map[a][b] = map[b][a] = 0;
        }
        cout << Prim() << endl;
    }
    return 0;
}