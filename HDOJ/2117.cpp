#include <iostream>
#include <string>
using namespace std;
int main()
{
    long n, m;
    while (cin >> n >> m)
    {
        if (n == 0 || n == 1)
            cout << 0 << endl;
        else
        {
            long rest = 1, ans;
            while (m--)
            {
                rest = rest % n * 10;
                ans = rest / n;
            }
            cout << ans << endl;

        }
    }
}