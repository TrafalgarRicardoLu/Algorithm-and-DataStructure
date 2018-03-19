#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int set[10000000] = {}, num[10000000] = {};

int find(int n)
{
    int r = n;
    while (set[r] != r)
        r = set[r];
    set[n] = r;
    return r;
}

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        if (n == 0)
        {
            cout << 1 << endl; break;
        }
        int a, b;
        for (int i = 1; i <= 10000000; i++)
        {
            num[i] = 1;
            set[i] = i; 
        }
        int f1,f2,max = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d", &a, &b);
            f1 = find(a);
            f2 = find(b);
            if (f1 != f2)
            {
                set[f2] = f1;
                num[f1]+=num[f2];
                if (max < num[f1])
                    max = num[f1];
            }
        }
        cout << max << endl;
    }
}