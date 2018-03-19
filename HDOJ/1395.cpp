#include<iostream>
#include<algorithm>
using namespace std;
int fun(int d,int n, int mod)
{
    int ans = 1;
    while (n)
    {
        if (n & 1)
            ans = (ans * d) % mod;
        n >>= 1;
        d = (d * d) % mod;
    }
    return ans;
}
int main()
{
    int mod;
    while (cin >> mod)
    {
        int flag = 0;
        if (!(mod & 1) || !mod)
            printf("2^? mod %d = 1\n",mod);
        else
        {
            for (int i = 1; i <= mod; i++)
            {
                if (fun(2, i, mod) == 1)
                {
                    printf("2^%d mod %d = 1\n", i, mod);
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                printf("2^? mod %d = 1\n", mod);
        }
    }

}