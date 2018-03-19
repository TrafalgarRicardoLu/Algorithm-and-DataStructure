#include<iostream>
#include<algorithm>
using namespace std;
int mod;
struct Matrix
{
    int a[10][10];
};
Matrix multi(Matrix a, Matrix b)
{
    Matrix  ans;
    for(int i=0;i<10;i++)
        for (int j = 0; j < 10; j++)
        {
            ans.a[i][j] = 0;
            for (int k = 0; k < 10; k++)
                ans.a[i][j] += a.a[i][k] * b.a[k][j];
            ans.a[i][j] %= mod;
        }
    return ans;
}
Matrix fastpower(Matrix x, int n)
{
    Matrix ans = {};
    for (int i = 0; i < 10; i++)
        ans.a[i][i] = 1;
    while (n)
    {
        if (n & 1)
            ans = multi(ans, x);
        x = multi(x, x);
        n >>= 1;
    }
    return ans;
}
int main()
{
    int k,ma;
    while (cin >> k >> mod)
    {
        Matrix m = {}, m1 = {};
        for (int i = 0; i < 10; i++)
            cin >> m.a[0][i];
        if (k <= 9)
        {
            cout << k << endl;
            continue;
        }
        for (int i = 1; i < 10; i++)
            m.a[i][i - 1] = 1;
        for (int i = 0; i < 10; i++)
            m1.a[i][0] = 9 - i;
        m = fastpower(m, k + 1 - 10);
        m = multi(m, m1);
        cout << m.a[0][0] % mod << endl;
    }
    return 0;

}