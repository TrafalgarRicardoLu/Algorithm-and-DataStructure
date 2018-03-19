#include <iostream>
using namespace std;
int fun(int n,int m)
{
    int a = n %m;
    int b = (n / m)%m;
    int c =( n / m / m)%m;
    int d = (n / m / m / m) % m;
    return a + b + c+d;
}
int main()
{
    int n;
    while (cin >> n&&n)
    {
        if (fun(n, 10) == fun(n, 12) && fun(n, 10) == fun(n, 16))
            cout << n << " is a Sky Number." << endl;
        else
            cout << n << " is not a Sky Number."<<endl;
    }
}