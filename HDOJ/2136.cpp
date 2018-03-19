#include<iostream>
#include<cstdio>
using namespace std;
int lfp[1000005] = {};
int main()
{
    int p = 1;
    for (int i = 2; i <= 1000000; i++)
        if (!lfp[i])
        {
            lfp[i] = p;
            for (int j = i+i; j <= 1000000; j += i)
                lfp[j] = p;
            p++;
        }
    long long n;
    while (scanf("%ld", &n) != EOF)
        printf("%d\n", lfp[n]);
}