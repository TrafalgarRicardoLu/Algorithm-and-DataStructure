#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while (scanf("%d",&n)!=EOF&&n)
    {
        int sum=0,a;
        while (n--)
        {
            scanf("%d",& a);
            sum ^= a;
        }
        cout << sum << endl;
    }
    return 0;
}      