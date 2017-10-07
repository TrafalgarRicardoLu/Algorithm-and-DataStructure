#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    while (cin >> t&&t)
        while (t--)
        {
            int n, v, c[4] = { 150,200,350 }, w[4] = { 150,200,350 }, f[10010] = {};
            cin >> v;
            for (int i = 0; i < 3; i++)
                for (int j = c[i]; j <= v; j++)
                    f[j] = max(f[j], f[j - c[i]] + w[i]);
            cout << v - f[v] << endl;
        }
    return 0;
}
