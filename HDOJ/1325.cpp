#include<stdio.h>  
#include<string.h>  
#include<algorithm>  
#include<iostream>  
using namespace std;
#define maxn 20  
int f[maxn];
int ru[maxn];
int vis[maxn];
int leap;
int find(int x)
{
    while (x != f[x])x = f[x];
    return x;
}
void add(int x, int y)
{
    vis[x] = vis[y] = 1;
    ru[y]++;
    x = find(x);
    y = find(y);
    if (x == y)leap = 1;
    f[x] = y;
}
int main()
{
    int c, i, a, b;
    c = 0;
    while (1)
    {
        leap = 0;
        c++;
        for (i = 0; i<maxn; i++)
            f[i] = i, ru[i] = 0, vis[i] = 0;
        scanf("%d%d", &a, &b);
        if (a<0 && b<0)break;
        if (a == 0 && b == 0)
        {
            printf("Case %d is a tree.\n", c);
            continue;
        }
        add(a, b);
        while (scanf("%d%d", &a, &b) && (a || b))
            add(a, b);
        int s = 0;
        for (i = 0; i<maxn; i++)
        {
            if (f[i] == i&&vis[i])s++;
            if (ru[i]>1)leap = 1;
        }
        if (s != 1)
            leap = 1;
        if (leap)printf("Case %d is not a tree.\n", c);
        else printf("Case %d is a tree.\n", c);
    }
    return 0;
}