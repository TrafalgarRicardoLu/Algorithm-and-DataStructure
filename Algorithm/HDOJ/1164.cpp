#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 2; i <= n; i++)
        {
            if (n%i == 0)
            {
                n /= i;
                printf("%d", i);
                if (n == 1)
                {
                    printf("\n");
                }
                else
                    printf("*");
                i = 1;
            }

        }
    }
}