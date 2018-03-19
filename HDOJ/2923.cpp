#include<stdio.h>
#include<map>
#include<iostream>
#include<cstring>
#define INF  1000000
using namespace std;
map <string, int > mymap;
int dis[500][500];
int n;
void floyed()
{
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                if (dis[i][j]>dis[i][k] + dis[k][j])
                    dis[i][j] = dis[i][k] + dis[k][j];
            }
}
int main()
{
    int t, m;
    int count;
    char a[15], b[30], c[15];
    int flag = 1;
    char d[1005][105];
    while (scanf("%d%d%d", &n, &t, &m) != EOF)
    {
        if (n == 0 && t == 0 && m == 0)   break;
        count = 1;
        mymap.clear();
        for (int i = 0; i<500; i++)
            for (int j = 0; j<500; j++)
                if (i == j)  dis[i][j] = 0;
                else dis[i][j] = INF;
                for (int i = 0; i <= t; i++)
                {
                    scanf("%s", &d[i]);
                    if (mymap[d[i]] == 0)
                        mymap[d[i]] = count++;
                }
                while (m--)
                {
                    scanf("%s", a);
                    scanf("%s%s", b, c);
                    if (mymap[a] == 0)
                        mymap[a] = count++;
                    if (mymap[c] == 0)
                        mymap[c] = count++;
                    int len = strlen(b);
                    int value = 0, date = 1;
                    for (int i = len - 3; i>1; i--)
                    {

                        value += ((b[i] - '0')*date);
                        date *= 10;
                    }

                    if (b[0] == '<'&&dis[mymap[a]][mymap[c]]>value) { dis[mymap[a]][mymap[c]] = value; }
                    if (b[len - 1] == '>'&&dis[mymap[c]][mymap[a]]>value) { dis[mymap[c]][mymap[a]] = value; }
                }
                floyed();
                int sum = 0;
                for (int i = 1; i <= t; i++)
                {
                    sum += (dis[mymap[d[0]]][mymap[d[i]]] + dis[mymap[d[i]]][mymap[d[0]]]);
                }
                printf("%d. %d\n", flag++, sum);
    }
}