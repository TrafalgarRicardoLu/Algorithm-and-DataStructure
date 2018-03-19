#include<iostream>
using namespace std;
int fun(int n, long long m)
{
    int ans = 1;
    while (m)
    {
        if (m & 1)
            ans = (n*ans) % 100;
        n = (n*n) % 100;
        m >>= 1;
    }
    return ans % 100;
    
}
int main()
{
    long long n,t;
    while (cin >> t&&t)
    {
        long long s = 0;
        while (t--)
        {
            cin >> n;
            cout << "Case " << ++s << ": " <<( fun(4, n - 1) + fun(2, n - 1))%100 << endl;
        }
        cout << endl;
    }
    return 0;
}