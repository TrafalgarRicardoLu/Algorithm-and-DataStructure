#include<iostream>
using namespace std;
int main()
{
    long long n,t;
    long long m;
    long long count[25] = {};
    int count_n[25] = {};
    for (int i = 1; i < 21; i++)
        count[i] = count[i - 1] * (i - 1) + 1;
    while (cin >> n >> m )
    {
        for (int i = 0; i < 21; i++)
            count_n[i] = i;
        while (n>0&&m>0)
        {
            t = m / count[n] + (m%count[n]>0 ? 1 : 0);
            if (t > 0)
            {
                cout << count_n[t];
                for (int i = t; i <= n; i++)
                    count_n[i]=count_n[i+1];
                m -= ((t - 1)*count[n] + 1);
                putchar(m == 0 ? '\n' : ' ');
            }
            n--;
        }
    }
}