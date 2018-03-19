#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    while (cin >> t&&t)
        while (t--)
        {
            int g_empty, g_filled, n;
            cin >> g_empty >> g_filled >> n;
            int v[10000], w[10000];
            long long f[10000] ;
            f[0] = 0;
            for (int i = 1; i <= g_filled; i++)
                f[i] =10000000;
            for (int i = 1; i <= n; i++)
                cin >> v[i] >> w[i];
            for (int i = 1; i <= n; i++)
                for (int j =w[i]; j<=(g_filled-g_empty); j++)
                    f[j] = min(f[j], f[j - w[i]] + v[i]);
            if(f[g_filled-g_empty]!=10000000)
                cout <<"The minimum amount of money in the piggy-bank is "<< f[g_filled-g_empty] <<"."<< endl;
            else 
                cout<< "This is impossible."<<endl;
        }
    return 0;
}