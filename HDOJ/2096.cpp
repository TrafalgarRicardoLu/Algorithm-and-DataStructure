#include <iostream>
using namespace std;
int main()
{
    long long n,m,a;
    while (cin >> n)
        while (n--)
        {
            cin >> m >> a;
            cout << (m + a) % 100 << endl;
        }
}