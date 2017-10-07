#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    while (cin >> n&&n>0)
    {
        int v[25000] = {}, num[25000] = {}, c[25000] = {}, sum = 0, f[25000] = {}, count = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i]>>num[i];
            sum += v[i] * num[i];
            for (int j = 1; j <= num[i]; j<<=1)
            {
                c[count++] = v[i] * j;
                num[i] -= j;
            }
            if (num[i] > 0)
                c[count++] = num[i] * v[i];    
        }
        for (int i = 1; i < count; i++)
            for (int j = sum / 2; j >= c[i]; j--)
                f[j]= max(f[j], f[j - c[i]] + c[i] );
        cout << sum - f[sum / 2] << " " << f[sum / 2] << endl;
    }
}