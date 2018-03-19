#include<iostream>
using namespace std;
int fun(int a, int b)
{
    return a < b ? a : b;
}
int fun1(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    char a, b, c, d,e,f;
    while (cin >> a >> b >> c)
    {
        f = fun(a, fun(b, c));
        e = fun1(a,fun1(b, c));
        d = a + b + c - f - e;
        cout << f << " " << d << " " << e <<endl;
    }
}