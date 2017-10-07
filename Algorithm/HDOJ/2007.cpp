#include<iostream>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int sum1 = 0, sum2 = 0,a;
        if (n > m)
        {
            a = m;
            m = n;
            n = a;

        }
        for (n; n <= m; n++)
        {
            if (n % 2 == 0)
                sum1 += n*n;
            else
                sum2 += n*n*n;
        }
        cout << sum1 << " " << sum2 << endl;
    }
}