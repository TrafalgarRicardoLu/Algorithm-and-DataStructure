#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    while (cin >> t&&t)
        while (t--)
        {
            int n, v, c[10010] = {}, w[10010] = {}, f[10010] = {};
            cin >> n >> v;
            for (int i = 0; i < n; i++)
                cin >> w[i];
            for(int i =0;i<n;i++)
                cin >> c[i];
            for (int i = 0; i < n; i++)
                for (int j = v; j >= c[i]; j--)
                    f[j] = max(f[j], f[j - c[i]] + w[i]);
            cout << f[v] << endl;
        }
    return 0;
}