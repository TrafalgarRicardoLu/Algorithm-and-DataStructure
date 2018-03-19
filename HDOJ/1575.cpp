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
            ans.a[i][j] %= 9973;
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
    int n,k;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Matrix num = {};
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> num.a[i][j];
        num = fastpower(num, k);
        long long  sum = 0;
        for (int i = 0; i < n; i++)
            sum += num.a[i][i];
        cout << sum % 9973 << endl;
    }
    return 0;

}
