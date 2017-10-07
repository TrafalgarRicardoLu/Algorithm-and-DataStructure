#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while (cin >> n&&n)
    {
        long w[100010] = {}, c[100010] = {}, f[100010] = {};
        for (int i = 0; i < n; i++)
            cin >> w[i] >> c[i];
        long m;
        cin >> m;
        for (int i = 0; i < n; i++)
            for (int j = c[i]; j <=m; j++)
                f[j] = max(f[j], f[j - c[i]] + w[i]);
        cout << f[m] << endl;
    }
    return 0;
}