#include<cstdio>
__int64 fastpower(__int64  p, __int64 a)
{
    __int64  ans = 1,c=p,d=a;
    while (p)
    {
        if (p&1)
            ans = (ans*a) % c;
        p >>=1;
        a = (a*a) % c;
    }
    if (ans == d)return true;
    else return false;
}
bool prime(long long p)
{
    for (__int64 i = 2; i*i <= p; i++)
        if (p%i == 0)
            return false;
    return true;
}

int main()
{
    __int64  p, a;
    while (scanf("%I64d %I64d",&p,&a)&&(p||a))
    {
        if (!prime(p) && fastpower(p,a))
            printf("yes\n");
        else
            printf("no\n");
    }
}