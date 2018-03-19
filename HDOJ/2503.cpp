#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a, int b)
{
    return b ? gcd(b, a%b) : a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a = a*d + c*b;
        b = b*d;
        cout << a / gcd(a, b) << " " << b / gcd(a, b) << endl;
    }
}