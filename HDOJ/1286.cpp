#include <iostream>
#include <algorithm>
using namespace std;
int euler(int n)
{
    int ret = n;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            ret = ret - ret / i;
            while (n % i == 0)
                n /= i;
        }
    if (n > 1)
        ret = ret - ret / n;
    return ret;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << euler(n) << endl;
    }
    return 0;
}