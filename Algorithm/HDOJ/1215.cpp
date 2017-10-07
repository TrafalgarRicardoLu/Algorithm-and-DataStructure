#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n, sum = 0;
        cin >> n;
        for (int i = 1; i*i <= n; i++)
        {
            if (n%i == 0 && i*i != n)
                sum += i + n / i;
            else if (i*i == n)
                sum += i;
        }
        cout << sum - n << endl;
    }
}