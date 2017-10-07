#include<iostream>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n)
    {
        cin >> m;
        int ans = 1;
        n %= 10;
        while (m > 0)
        {
            if (m % 2 == 1)
                ans = (ans*n) % 10;
            m /= 2;
            n = (n*n) % 10;
        }
        cout << ans << endl;
    }
}