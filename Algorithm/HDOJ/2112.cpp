#include<iostream>  
#include<algorithm>  
#include<cstring>  
#include<queue>  
#include<map>  
#define N 170  
#define INF 0x7ffffff  
using namespace std;
int cnt, n, a[N][N], d[N], v[N];
int spfa(int s, int t)
{
    if (s == t)    return 0;
    for (int i = 1; i <= cnt; i++)
        d[i] = INF, v[i] = 0;
    queue<int> q;
    d[s] = 0;
    v[s] = 1;
    q.push(s);
    while (!q.empty())
    {
        int c = q.front();
        q.pop();
        v[c] = 0;
        for (int i = 1; i <= cnt; i++)
            if (d[i] > d[c] + a[c][i])
            {
                d[i] = d[c] + a[c][i];
                if (!v[i])
                {
                    v[i] = 1;
                    q.push(i);
                }
            }
    }
    if (d[t] >= INF)   return -1;
    return d[t];
}

int main()
{
    while (cin >> n && n != -1)
    {
        for (int i = 1; i<N; i++)
            for (int j = 1; j<N; j++)
                a[i][j] = INF;
        map<string, int>mp;
        mp.clear();
        char s[110], t[110];
        cin >> s >> t;
        cnt = 0;
        mp[s] = ++cnt;
        if (mp[t] == 0)    mp[t] = ++cnt;
        for (int i = 0; i<n; i++)
        {
            int c;
            char ss[110], tt[110];
            cin >> ss >> tt >> c;
            if (mp[ss] == 0)    mp[ss] = ++cnt;
            if (mp[tt] == 0)    mp[tt] = ++cnt;
            if (a[mp[ss]][mp[tt]]>c)
                a[mp[ss]][mp[tt]] = a[mp[tt]][mp[ss]] = c;
        }
        cout << spfa(mp[s], mp[t]) << endl;
    }
}